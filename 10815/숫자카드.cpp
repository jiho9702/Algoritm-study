#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> v;

int bin_search(int first, int end, int x) {
	while (first <= end) {
		int middle = (first + end) / 2;
		if (v[middle] == x) {
			return 1;
		}
		else if (v[middle] < x) {
			first = middle + 1;
		}
		else {
			end = middle - 1;
		}
	}
	return 0;
}

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
		cout << bin_search(0, v.size() - 1, number) << " ";
	}
}