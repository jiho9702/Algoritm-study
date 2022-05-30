#include <iostream>
using namespace std;

int dp[1000001] = { 0, };

int main() {

	int n;
	cin >> n;

	dp[1] = 1 % 15746;
	dp[2] = 2 % 15746;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	}

	cout << dp[n];

}