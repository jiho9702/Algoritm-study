#include <iostream>
using namespace std;

int arr[100001] = { 0, };

int main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		if (i == 1) {
			arr[i] = num;
		}
		else {
			arr[i] = (num + arr[i - 1]);
		}
	}

	while (m--) {
		int x, y;
		cin >> x >> y;
		cout << arr[y] - arr[x - 1] << "\n";
	}

}