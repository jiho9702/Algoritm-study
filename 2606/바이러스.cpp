#include <iostream>
#include <vector>

using namespace std;

int computer, lane;
int c[101];
vector<int> v[101];
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
			cnt++;
		}
	}
}

int main() {
	
	cin >> computer >> lane;

	for (int i = 0; i < lane; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);
	cout << cnt << "\n";
}