#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	
	cout << abs(-1) << endl;           // int�� ���� ���
	cout << labs(-1111111111) << endl; // long�� ���� ���
	cout << fabs(-3.14) << endl;       // double�� ���� ���

	cout << rand() << endl;			 // ���� 1�� ��ȯ (�ٽ� �����ص� ���� ������ ����)
	srand((unsigned int)time(NULL)); // �Լ��� �õ尪 ����(time(NULL)�� ���� time.h ������� �ʿ�)
	cout << rand() << endl;          // ������ ������ ���� ����

	return 0;
}