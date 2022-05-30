#include <iostream>
using namespace std;

unsigned int result;
unsigned int n, k;
unsigned int rope[10000];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> k >> n;
	unsigned int max_length_rope = 0;
	for (int i = 0; i < k; i++) {
		cin >> rope[i];
		max_length_rope = max(max_length_rope, rope[i]);
	}
	unsigned int left = 1, right = max_length_rope, mid;

	while (left <= right) {
		mid = (left + right) / 2;
		unsigned int rope_count = 0;
		for (int i = 0; i < k; i++) {
			rope_count += rope[i] / mid;
		}
		if (rope_count >= n) {
			left = mid + 1;
			result = max(result, mid);
		}
		else {
			right = mid - 1;
		}
	}
	cout << result;
}