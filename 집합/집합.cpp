#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s[21] = { 0, };
    int count;
    cin >> count;
    string st1;
    for (int i = 0; i < count; i++) {
        cin >> st1;
        int x;
        if (st1 == "add") {
            cin >> x;
            if (s[x] == 0) {
                s[x] = 1;
            }
        }
        if (st1 == "remove") {
            cin >> x;
            if (s[x] != 0) {
                s[x] = 0;
            }
        }
        if (st1 == "check") {
            cin >> x;
            if (s[x] == 1) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        if (st1 == "toggle") {
            cin >> x;
            if (s[x] == 1) {
                s[x] = 0;
            }
            else {
                s[x] = 1;
            }
        }
        if (st1 == "all") {
            for (int i = 1; i < 21; i++) {
                s[i] = 1;
            }
        }
        if (st1 == "empty") {
            for (int i = 1; i < 21; i++) {
                s[i] = 0;
            }
        }
    }
}