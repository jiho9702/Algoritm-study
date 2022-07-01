#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie();
	cout.tie();

	int n, k, count = 0;
	int arr[10000];
	int a, b;
	cin >> n >> k;


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (arr[j] > arr[j + 1]) {
				count++;
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				if (count == k) {
					a = arr[j];
					b = arr[j + 1];
				}
			}
		}
	}
	if (count >= k) {
		cout << a << " " << b << "\n";
	}
	else if (count < k) {
		cout << "- 1" << "\n";
	}
}
