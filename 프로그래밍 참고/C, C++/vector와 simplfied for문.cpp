#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> vec(10);

	cout << "Enter 10 num: ";
	
	for (int& elem : vec)	 // 참조자를 이용하여 vector에 value 입력
		cin >> elem;

	for (int elem : vec)     // 굳이 참조자를 이용할 필요가 없는 듯
		cout << elem << endl;
	/*
	simplfied for문을 사용할 때는
	Python의 for문을 떠올려보자
	*/
	
	return 0;
}