#include <iostream>
using namespace std;

int dp[1001] = {0, };
int arr[1001] = {0, };


int main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie();
	cout.tie();

	int t, n;
	cin >> t;

	while (t--) {
		cin >> n;
		int answer = -999999999;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			dp[i] = max(dp[i-1] + arr[i], arr[i]);
			answer = max(answer, dp[i]);
		}
		cout << answer << "\n";
	}
}