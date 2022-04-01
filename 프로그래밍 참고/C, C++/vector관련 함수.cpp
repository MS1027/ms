#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> list;  // ������ vector ����

	list.push_back(3); // vector ���� 3 �߰�
	list.push_back(-3);
	list.push_back(5);

	for (int elem : list)
		cout << elem << ' ';
	cout << endl;

	list.pop_back();  // vector���� �� ������ ���� ����
	list.pop_back();

	for (int elem : list)
		cout << elem << ' ';
	cout << endl;





	cout << list.at(0) << ' ' << list[0] << endl;
	/*
	[0]���� �ε����� �ϴ� ��� ������ �ϵ� �߸��� �ε����� ���� ��Ÿ�� ������ �߻�
	������ at�� ���� �߸��� �ε����� �����Ϸ� �� ��� ������ ������ �߻�
	*/





	list = { 1,2,3,4,5 };

	for (unsigned i = 0; i != list.size(); i++) // size()�Լ��� ���� ����Ʈ�� ũ�⿡ ���� ����
		cout << list.at(i) << ' ';

	
	/*
	�߰������� vector�� �����ϸ� pass by reference�� ���ڸ� ������ �ϴµ�
	vector�� ũ�Ⱑ Ŀ������ �ӵ��� Ȯ���� �������� ����
	(�޸� ȿ�� ������ ����)
	*/
	
	return 0;
}