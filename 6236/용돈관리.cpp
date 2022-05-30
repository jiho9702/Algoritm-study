#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main() {

	int answer = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < n; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
		answer = max(dp[i], answer);
	}
	cout << answer;
}