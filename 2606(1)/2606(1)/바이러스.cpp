#include <iostream>
#include <vector>
using namespace std;

int com, link;
bool check[101];
vector<int> v[101];
int cnt = 0;

void dfs(int x) {
	check[x] = true;
	int each_dfs_size = v[x].size();
	for (int i = 0; i < each_dfs_size; i++) {
		int y = v[x][i];
		if (!check[y]) {
			dfs(y);
			cnt++;
		}
	}
}

int main() {
	cin >> com >> link;

	for (int i = 0; i < link; i++) {
		int com1,com2;
		cin >> com1 >> com2;
		v[com1].push_back(com2);
		v[com2].push_back(com1);
	}

	dfs(1);

	cout << cnt << "\n";

}