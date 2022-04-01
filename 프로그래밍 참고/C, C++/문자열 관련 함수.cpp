#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string word = "fred"; // 문자열 생성

	cout << word.length() << endl; // 문자열의 길이 반환
	cout << word.size() << endl;   // 문자열의 길이 반환 (length()와 같음)





	if (word.empty()) // 문자열이 비어있으면 True 반환
		cout << "Empty!" << endl;
	else
		cout << "Not Empty!" << endl;

	word.clear(); // 문자열에서 값(value)을 삭제

	if (word.empty()) // 문자열이 비어있으면 True 반환
		cout << "Empty!" << endl;
	else
		cout << "Not Empty!" << endl;





	word = "good";
	cout << word << endl;
	word += "-bye"; // 문자열에 문자열을 더하기
	cout << word << endl;





	cout << "첫 번째 글자: " << word[0] 
		<< " 두 번째 글자: " << word[word.length() - 1] << endl; // 인덱싱 가능





	cout << word.substr(2) << endl;    // 문자열에서 지정한 자리부터 끝까지 슬라이싱하여 반환 (원형이 변하는 것은 아님)
	cout << word.substr(1, 3) << endl; // 문자열에서 지정한 수를 (시작, 갯수)로 슬라이싱하여 반환 (시작: 0)





	if (word == "good-bye") // 문자열 비교 (두 값이 같으면 True 반환)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}