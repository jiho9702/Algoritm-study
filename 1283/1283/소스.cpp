#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> s;

int main() {

	ios::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count;
	cin >> count;

	for (int i = 0; i <= count; i++) {
		string str;
		getline(cin, str);
		s.push_back(str);
	}

	for (int i = 0; i <= count; i++) {
		string result = s[i];
		bool check = false;
		for (int j = 0; j < s.size(); j++) {
			if (j == 0 || (result[j - 1] == ' ' && j > 0)) {
				if (result[j] == ' ') {
					continue;
				}
			}
		}
	}
	
}