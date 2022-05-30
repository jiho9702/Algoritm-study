#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, number;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number;
		v.push_back(number);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> number;
		auto u = upper_bound(v.begin(), v.end(), number);
		auto l = lower_bound(v.begin(), v.end(), number);
		cout << u - l << " ";
	}
}