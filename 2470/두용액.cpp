#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

deque<int> liquid;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        liquid.push_back(number);
    }

    sort(liquid.begin(), liquid.end());

    pair<int, int> answer = make_pair(liquid.front(), liquid.back());
    
    while (liquid.size() >= 2) {
        int result = liquid.front() + liquid.back();
        if (abs(result) < abs(answer.first + answer.second)) {
            answer = make_pair(liquid.front(), liquid.back());
        }
        if (result > 0) {
            liquid.pop_back();
        }
        else {
            liquid.pop_front();
        }
    }
    cout << answer.first << " " << answer.second;
}