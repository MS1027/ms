#include <iostream>

using namespace std;

void print(const int* arr, int n) { // int arr[]�� array�� ���� �޴� �Ͱ� int* arr�� array�� ����Ű�� �ִ� '������'�� �޴� ���� ���� �ǹ�
	for (int i = 0; i < n; i++)
		cout << *(arr + i) << ' ';
	cout << endl;
}

int main() {

	int a[] = { 2,4,6,8,10,12,14,16,18,20 }; // ������ array ����
	int* p;									 // ������ ������ ����
	p = &a[0];								 // ������ p�� a[0]�� ����Ŵ

	for (int i = 0; i < 10;i++) {
		cout << *(p + i) << ' ';             // *(p+i)�� �ǹ̴� p�� ����Ű�� �ִ� a�� i��° ��(��, a[i])�� �ǹ�
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {           // �� for���� ���� ��� ���� ����
		cout << *p << ' ';
		p++;								 // p�� ���� �ε������� ����Ű���� ��
	}
	cout << endl;





	p = a; // p = &a[0]�� ���� �ǹ�

	cout << *p << ' ' << *(p + 1) << endl;

	*p = 1;			// ����Ű�� �ִ� ���� �� ���� ����
	*(p + 1) = 3;

	cout << *p << ' ' << *(p + 1) << endl; // ���� ����� ���� �� �� ����



	print(p, 10); // �����͸� �Ű������� ���

	return 0;
}