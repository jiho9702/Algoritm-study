#include<iostream>
#include<queue>
using namespace std;

string st[101];
bool visit[101][101];
int n, m;
queue<int> qx, qy, qc;


int main() {
    int result;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> st[i];
    }

    qx.push(0); qy.push(0); qc.push(1);
    visit[0][0] = true;

    while (!qx.empty()) {
        int cx = qx.front(); qx.pop();
        int cy = qy.front(); qy.pop();
        int cc = qc.front(); qc.pop();
        visit[cy][cx] = true;

        if (cx == m - 1 && cy == n - 1) {
            result = cc;
            continue;
        }

        int top = cy - 1, bottom = cy + 1, left = cx - 1, right = cx + 1;

        if (bottom <= n - 1 && visit[bottom][cx] == false && st[bottom][cx] == '1') {
            qx.push(cx); qy.push(bottom); qc.push(cc + 1);
        }
        if (right <= m - 1 && visit[cy][right] == false && st[cy][right] == '1') {
            qx.push(right); qy.push(cy); qc.push(cc + 1);
        }
        if (left >= 0 && visit[cy][left] == false && st[cy][left] == '1') {
            qx.push(left); qy.push(cy); qc.push(cc + 1);
        }
        if (top >= 0 && visit[top][cx] == false && st[top][cx] == '1') {
            qx.push(cx); qy.push(top); qc.push(cc + 1);
        }

    }

    cout << result << endl;
}