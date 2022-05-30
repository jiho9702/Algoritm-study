#include <iostream>
using namespace std;

int arr[100001] = {0, };

int main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	//미리 합을 구해두는 방법
	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		if (i == 1) {
			arr[i] = num;
		}
		else {
			arr[i] = num + arr[i - 1];
		}
	}

	cin >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		cout << arr[y] - arr[x - 1] << "\n";
	}


	//직접 인덱스에 접근하는 방법
	/*int n;
	int m;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		int x, y, sum = 0;
		cin >> x >> y;
		for (int j = x; j <= y; j++) {
			sum = sum + arr[j];
		}
		cout << sum << "\n";
		sum = 0;
	}*/
}