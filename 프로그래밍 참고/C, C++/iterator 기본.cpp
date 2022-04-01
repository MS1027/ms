#include <iostream>
#include <string>
#include <vector>
using namespace std;


//iterator: point-like object(container element의 위치[주소값]를 저장) container란 vector나 list같은 것들을 말함.
// iterator는 포인터가 아니기 때문에 주소값을 상응하는 의미를 가질 뿐 주소값을 나타내는게 아님!
// - 주요 함수: begin(v), end(v)
// - 주요 연산자: iter++, *iter, iter1 != iter2 모든 iterator는 이 세 연산자가 반드시 오버로딩 되어있음.
// - 추가 연산자: iter--, iter += 5, iter -= 5 등 이런 연산자들이 없는 iterator도 있음.
int main() {
	
	vector<int> v{ 1, 2, 3 };
	auto iter_begin = begin(v); // 원래는 vector<int>::iterator 형태이지만 길어서 auto로 씀.
	auto iter_end = end(v);
	for (auto iter = iter_begin; iter != iter_end; iter++)
		cout << *iter << "\t"; // 현재 위치의 값 반환
	cout << endl;

	return 0;
}