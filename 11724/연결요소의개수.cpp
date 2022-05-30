#include <iostream>
#include <vector>
using namespace std;

int n, m;
int c[1001];
vector<int> v[1001];
int cnt = 0;

void dfs(int x) {
	if (c[x]) {
		return;
	}
	c[x] = true;
	for (int i = 0; i < v[x].size(); i++) {
		int y = v[x][i];
		if (!c[y]) {
			dfs(y);
		}
	}
}

int main() {

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		if (!c[i]) {
			cnt++;
			dfs(i);
		}
	}

	cout << cnt;
}
