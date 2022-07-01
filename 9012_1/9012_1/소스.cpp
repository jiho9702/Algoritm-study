#include <iostream>
#include <stack>

using namespace std;

int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		stack<char> c;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(') {
				c.push(s[j]);
			}
			else {
				if (!c.empty() && c.top() == '(') {
					c.pop();
				}
				else {
					c.push(s[j]);
					break;
				}
			}
		}
		if (c.empty()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}