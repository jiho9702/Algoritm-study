#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie();
	cout.tie();

	int num;
	cin >> num;

	while (num--) {

		string c;
		cin >> c;
		stack<char> s;

		for (int k = 0; k < c.length(); k++) {
			if (c[k] == '(') {
				s.push(c[k]);
			}
			else{
				if (s.size() != 0 && s.top() == '(') {
					s.pop();
				}
				else {
					s.push(')');
					break;
				}
			}
		}
		if (!s.empty()) {
			cout << "NO" << "\n";
		}
		else {
			cout << "YES" << "\n";
		}

	}

}