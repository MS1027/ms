#include <iostream>
using namespace std;

bool find_char(const char* s, char ch) {
	while (*s != '\0') { // 문자열의 끝은 \0임
		if (*s == ch)
			return true;
		s++; // 다음 인덱스를 가리키도록 함
	}
	return false;
}

int main() {
	
	const char* phrase = "this is a phrase"; // phrase라는 문자형 포인터가 '문자열'을 가리키도록 선언
	
	for (char ch = 'a'; ch <= 'z'; ch++) {
		cout << '\'' << ch << '\'' << "is ";
		if (!find_char(phrase, ch)) // 문자열 속에 지정된 ch가 없으면 false를 반환하므로 부정형을 사용
			cout << "Not ";
		cout << "in " << '\"' << phrase << '\"' << endl; // 포인터인 phrase를 *없이 출력하면 문자열 전체를 출력
	}

	return 0;
}