#include <iostream>
#include <vector>
using namespace std;

int num;
bool visit[9];

void make_list(int cnt, vector<int> result) {

	if (cnt == num) {
		for (int i = 0; i < cnt; i++) {
			cout << result[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= num; i++) {
		if (visit[i]) {
			continue;
		}
		visit[i] = true;
		result[cnt] = i;
		make_list(cnt + 1, result);
		visit[i] = false;
	}

}

int main() {

	cin >> num;

	vector<int> result(num);
	make_list(0, result);

}