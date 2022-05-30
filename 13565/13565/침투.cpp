#include <iostream>
#include <vector>

using namespace std;

int row, col;
string thru[1001];
int check[1001][1001];
bool finish = false;

void dfs(int x, int y) {
	check[x][y] = 1;
	int up = x + 1, bottom = x - 1, left = y - 1, right = y + 1;

	if (x == row - 1) {
		finish = true;
		return;
	}
	if (bottom >= 0 && thru[bottom][y] == '0' && !check[bottom][y]) {
		dfs(bottom, y);
	}
	if (thru[up][y] == '0' && !check[up][y]) {
		dfs(up, y);
	}
	if (left >= 0 && thru[x][left] == '0' && !check[x][left]) {
		dfs(x, left);
	}
	if (right < col && thru[x][right] == '0' && !check[x][right]) {
		dfs(x, right);
	}
}

int main() {
	
	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		string a;
		cin >> a;
		thru[i] = a;
	}

	for (int i = 0; i < col; i++) {
		if (thru[0][i] == '0') {
			dfs(0, i);
			if (finish == true) {
				cout << "YES" << "\n";
				return 0;
			}
		}
	}
	cout << "NO" << "\n";
}