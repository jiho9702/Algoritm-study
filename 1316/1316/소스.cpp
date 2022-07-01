#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	int count=0;
	cin >> n;

	vector<string> s;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		s.push_back(word);
	}

	for (int i = 0; i < n; i++) {
		bool checker = false;
		int check[26] = { 0, };
		if (s[i].size() == 1) {
			count++;
		}
		for (int j = 0; j < s[i].size()-1; j++) {
			int num1 = s[i][j]-97;
			int num2 = s[i][j + 1] - 97;
			check[num1] = 1;
			if (s[i][j] == s[i][j + 1]) {
				check[num2] = 1;
				checker = true;
			}
			else if (s[i][j] != s[i][j + 1]) {
				if (check[num2] == 0) {
					checker = true;
				}
				else {
					checker = false;
					break;
				}
			}
		}
		if (checker == true) {
			count++;
		}
	}
	cout << count;
}