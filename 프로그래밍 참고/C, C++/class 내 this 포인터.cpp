#include <iostream>
using namespace std;

class Point {
	double x;
public:
	void set_x(double x) {
		this->x = x; // this��� �����͸� �ڵ����� �����ϴµ� ȣ���� �ν��Ͻ� �ڽ��� �ּڰ��� ����
	} // ���� �̷��� ���� ������ �Ű������� ��������� �̸��� x�� ���� ����...
	double get_x() {
		return x;
	}
};

int main() {
	
	Point inst1, inst2;

	inst1.set_x(10.0); // �ν��Ͻ��� ���������
	inst2.set_x(20.0); // ���� ������

	cout << inst1.get_x() << endl;
	cout << inst2.get_x() << endl;

	return 0;
}