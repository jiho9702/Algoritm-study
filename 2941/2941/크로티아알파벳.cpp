#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie();
	cout.tie();

	string cro;
	cin >> cro;
	int count = 0;

	for (int i = 0; i < cro.length(); i++) {
		if (cro[i] == 'c' && cro[i+1] == '='|| cro[i] == 'c' && cro[i + 1] == '-'||
			cro[i] == 'd' && cro[i + 1] == '-'|| cro[i] == 'l' && cro[i + 1] == 'j'||
			cro[i] == 'n' && cro[i + 1] == 'j'|| cro[i] == 's' && cro[i + 1] == '='||
			cro[i] == 'z' && cro[i + 1] == '=') {
			count++;
			i += 1;
		}
		else if (cro[i] == 'd' && cro[i+1] == 'z' && cro[i+2] == '=') {
			count++;
			i += 2;
		}
		else {
			count++;
		}
	}

	cout << count << "\n";

}