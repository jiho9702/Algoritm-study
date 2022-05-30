#include <iostream>
using namespace std;

int arr[10001];

int main() {

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int answer = 0, start = 0, end = 0, sum = 0;

	while (end <= n) {
		if (sum >= m) {
			sum -= arr[start++];
		}
		else if (sum < m) {
			sum += arr[end++];
		}
		if (sum == m) {
			answer++;
		}
	}
	cout << answer << "\n";
}