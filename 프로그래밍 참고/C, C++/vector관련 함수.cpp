#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> list;  // 정수형 vector 선언

	list.push_back(3); // vector 끝에 3 추가
	list.push_back(-3);
	list.push_back(5);

	for (int elem : list)
		cout << elem << ' ';
	cout << endl;

	list.pop_back();  // vector에서 맨 마지막 값을 제거
	list.pop_back();

	for (int elem : list)
		cout << elem << ' ';
	cout << endl;





	cout << list.at(0) << ' ' << list[0] << endl;
	/*
	[0]으로 인덱싱을 하는 경우 실행은 하되 잘못된 인덱스에 대해 런타임 에러가 발생
	하지만 at을 통해 잘못된 인덱스에 접근하려 할 경우 컴파일 오류가 발생
	*/





	list = { 1,2,3,4,5 };

	for (unsigned i = 0; i != list.size(); i++) // size()함수를 통해 리스트의 크기에 접근 가능
		cout << list.at(i) << ' ';

	
	/*
	추가적으로 vector는 웬만하면 pass by reference로 인자를 보내야 하는데
	vector의 크기가 커질수록 속도가 확연히 느려지기 때문
	(메모리 효율 증가를 위해)
	*/
	
	return 0;
}