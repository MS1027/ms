#include <iostream>
using namespace std;

class Point {
public:
	double x, y;
};

int main() {
	
	Point* pt1;

	pt1 = new Point; // �ν��Ͻ��� �������� �Ҵ�

	pt1->x = 10.0; // pt1->x�� (*pt1).x�� ����
	pt1->y = 20.0;

	cout << pt1->x << ' ' << pt1->y << endl;

	delete pt1; // ����� ������ �� delete ����

	return 0;
}