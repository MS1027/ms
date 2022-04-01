#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T> // Ŭ���� ���ø�
class Point {
private:
	T x, y;
public:
	Point(T _x, T _y) : x(_x), y(_y) {}
	void setXY(T _x, T _y) { x = _x; y = _y; }
	T getX() const { return x; } // ��������� �ٲ��� �����Ƿ�
	T getY() const { return y; } // const��� �����ָ� ����.
	void print() { cout << x << ", " << y << endl; }
};


int main() {
	Point<int> pt1(1, 2);				// Ŭ���� ���ø��� ��ü�� ���� �ÿ���
	Point<double> pt2(1.1, 2.2);		// T�� �� ������ ������
	Point<string> pt3("ABC", "XYZ");	// ������־�� ��.

	pt1.print();
	pt2.print();
	pt3.print();

	return 0;
}