#include <iostream>
#include <string>
#include <vector>
using namespace std;


template <typename T, typename V> // ����� T�� V�� �Ű������μ� �ּ� �� ������ ���Ǿ�� ��.
//template <class T, typename V> ��� �ص� ��, ������ ������ ������.
bool less_than(T a, V b) { // ȣ��Ǵ� ���忡 ���� T�� V�� ������Ÿ���� ������. ��ü�� �� �� ������ const T&�� ���·� �� ���� ����.
	return a < b;
}

template<typename T> // �ϳ��� template�� �ϳ��� �Լ��� �����.
T sum(const vector<T>& v) { // ��ȯ���� T�� ġȯ ����
	T result = 0;
	for (T elem : v)
		result += elem;

	return result;
}

int main() {

	cout << less_than(2, 3) << endl;		// int
	cout << less_than(2.2, 2.7) << endl;	// double 
//	cout << less_than(2, 2.7) << endl;		// typename V�� ���ٸ� T�� ������ ������ �� ���� ������ ����� �� ����.
	cout << less_than(2, 2.7) << endl;		// T�� int, V�� double�� ��
	
	string s1 = "ABC";
	string s2 = "X";

	cout << less_than(s1, s2) << endl;		// ���ڿ��� ���̿� ������� ù �ε������� ���� ���Ͽ� ����

	vector<int> v1{ 1, 2, 3 };
	vector<double> v2{ 1.1, 2.2, 3.3 };
	cout << sum(v1) << endl;				// �Լ� �����ε����� template�� ����
	cout << sum(v2) << endl;				// �ٸ� ������Ÿ���� �Ű������� ȣ�� ����

	return 0;
}