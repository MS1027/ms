#include <iostream>
#include <string>
#include <vector>
using namespace std;


//iterator: point-like object(container element�� ��ġ[�ּҰ�]�� ����) container�� vector�� list���� �͵��� ����.
// iterator�� �����Ͱ� �ƴϱ� ������ �ּҰ��� �����ϴ� �ǹ̸� ���� �� �ּҰ��� ��Ÿ���°� �ƴ�!
// - �ֿ� �Լ�: begin(v), end(v)
// - �ֿ� ������: iter++, *iter, iter1 != iter2 ��� iterator�� �� �� �����ڰ� �ݵ�� �����ε� �Ǿ�����.
// - �߰� ������: iter--, iter += 5, iter -= 5 �� �̷� �����ڵ��� ���� iterator�� ����.
int main() {
	
	vector<int> v{ 1, 2, 3 };
	auto iter_begin = begin(v); // ������ vector<int>::iterator ���������� �� auto�� ��.
	auto iter_end = end(v);
	for (auto iter = iter_begin; iter != iter_end; iter++)
		cout << *iter << "\t"; // ���� ��ġ�� �� ��ȯ
	cout << endl;

	return 0;
}