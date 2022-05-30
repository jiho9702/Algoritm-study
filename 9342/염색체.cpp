#include <iostream>
#include <string>
#include <deque>
#include <regex>
using namespace std;

/*

^ x // '^'은 문자열의 시작을 표현하며, x문자로 시작됨을 의미

x$ // '$'은 문자열의 종료를 표현하며, x문자로 종료됨을 의미

.x // '.'은 개행문자 \n을 제외한 다른 모든 문자를 의미

x + // '+'은 1회 이상 반복을 의미, x문자가 1번 이상 반복됨을 의미 ({1,}과 동일)

x * // '*'은 0회 이상 반복을 의미, x문자가 0번 이상 반복됨을 의미 ({0,}과 동일)

x ? // '?'은 0 or 1개 문자 매칭 의미, x문자가 존재할 수도 있고 안할수도 있다는 의미 ({0,1}과 동일)

x | y // '|'은 or를 표현, x 또는 y가 나온다는 의미

(x) // '()'은 그룹을 표현, 괄호로 묶인 패턴을 의미 ((abc){3}와 같이 사용해서 abcabcabc를 검출하는데 쓰임)

x {
	n
} // '{}'은 반복을 의미, x가 n번 반복됨을 의미

x{ n, } // '{,}'은 반복을 의미, x가 n번 이상 반복됨을 의미

x{ n,m } // '{}'은 반복을 의미, x가 n번 이상 m번 이하로 반복됨을 의미

[xy] // '[]'은 x또는 y를 찾는다는 의미, [a-z0-9]이면 알파벳 소문자 또는 숫자를 찾는다는 의미

[^ xy] // '[^]'은 not을 의미, x 및 y 를 제외하고 찾는다는 의미

[a - z] // '[-]'은 a ~ z 를 찾는다는 의미

?

\d // '\d'은 digit으로 숫자를 의미

\D // '\D'은 not digit으로 숫자를 제외하고 나머지 다른 문자를 의미

\s // '\s'은 space로 공백문자를 의미

\S // '\S'은 not space로 공백문자를 제외한 나머지 다른 문자를 의미

\t // '\t'은 tap을 의미

\w // '\w'은 알파벳 대문자,소문자와 숫자를 의미, [A-Za-z0-9]을 의미

\W // '\W'은 not \w, 즉 \w를 제외한 특수문자를 의미

?

(? : ) // 캡쳐하지 않는 그룹 생성

*/

int main() {

	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);

	int num;
	cin >> num;

	regex r(R"(^[A-F]?A+F+C+[A-F]?$)");
	while (num--) {
		string genuine;
		cin >> genuine;
		regex_match(genuine, r) ? cout << "Infected!\n" : cout << "Good\n";
	}
}