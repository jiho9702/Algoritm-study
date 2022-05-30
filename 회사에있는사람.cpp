#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    set<string> name;
    string s;
    string en;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    for (int i = 0; i < n; i++) {
        cin >> s >> en;
        if (en == "enter") {
            name.insert(s);
        }
        else {
            name.erase(s);
        }
    }

    for (auto it = name.rbegin(); it != name.rend(); it++) {
        cout << *it << "\n";
    }
}