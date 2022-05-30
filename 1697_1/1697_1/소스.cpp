#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int check[100001] = {0, };

int main() {

	int n, k;
	queue<int> q;

	cin >> n >> k;

	//fill(check, check + 100001, -1);

	q.push(n);
	check[n] = 0;

	while (!q.empty()) {
		int a = q.front();
		q.pop();
		if (a - 1 >= 0 && check[a - 1] == 0) {
			check[a - 1] = check[a] + 1;
			q.push(a - 1);
		}
		if (a + 1 <= 100000 && check[a + 1] == 0) {
			check[a + 1] = check[a] + 1;
			q.push(a + 1);
		}
		if (a * 2 <= 100000 && check[a * 2] == 0) {
			check[a * 2] = check[a] + 1;
			q.push(a * 2);
		}
		if (check[k] != 0) {
			cout << check[k];
			break;
		}
	}

}