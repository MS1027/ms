#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> vec(10);

	cout << "Enter 10 num: ";
	
	for (int& elem : vec)	 // �����ڸ� �̿��Ͽ� vector�� value �Է�
		cin >> elem;

	for (int elem : vec)     // ���� �����ڸ� �̿��� �ʿ䰡 ���� ��
		cout << elem << endl;
	/*
	simplfied for���� ����� ����
	Python�� for���� ���÷�����
	*/
	
	return 0;
}