#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, v;
int check[1001] = {0, };
int check_[1001] = { 0, };
vector<int> node[10001];
queue<int> q;

void dfs(int x) {
	check[x] = true;
	cout << x << " ";
	for (size_t i = 0; i < node[x].size(); i++) {
		int y = node[x][i];
		if (!check[y]) {
			dfs(y);
		}
	}
}

void bfs(int x) {
	q.push(x);
	check_[x] = true;
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		cout << y << " ";
		for (long unsigned int i = 0; i < node[y].size(); i++) {
			int z = node[y][i];
			if (!check_[z]) {
				q.push(z);
				check_[z] = true;
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		node[x].push_back(y);
		node[y].push_back(x);
	}

	for (int i = 0; i < m; i++) {
		sort(node[i].begin(), node[i].end());
	}

	dfs(v);
	cout << "\n";
	bfs(v);

}