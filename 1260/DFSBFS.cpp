#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int number, lane, start;
int c[1001];
int d[1001];
vector<int> a[10001];

void bfs(int x) {
	queue<int> q;
	q.push(x);
	d[x] = true;
	while (!q.empty()) {
		int b = q.front();
		q.pop();
		cout << b << " ";
		for (int i = 0; i < a[b].size(); i++) {
			int y = a[b][i];
			if (!d[y]) {
				q.push(y);
				d[y] = true;
			}
		}
	}
}

void dfs(int x) {
	if (c[x]) {
		return;
	}
	c[x] = true;
	cout << x << " ";
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		dfs(y);
	}
}


int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> number >> lane >> start;

	for (int i = 0; i < lane; i++) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}

	for (int i = 0; i < lane; i++) {
		sort(a[i].begin(), a[i].end());
	}

	dfs(start);
	cout << "\n";
	bfs(start);
}