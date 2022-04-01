#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T> 
class Point {
private:
	T x, y;
public:
	Point(T _x, T _y);
	void setXY(T _x, T _y);
	T getX() const;
	T getY() const;
	void print();
};

template<typename T> // �����/������ �и� �� �� �޼ҵ帶�� ���ø��� ������� ��.
Point<T>::Point(T _x, T _y) : x(_x), y(_y) {} // �ܺο��� �޼ҵ� ���� �� Ŭ���� ���ø��� ��� ���� �Ͱ� ���� ������� ��.

template<typename T>
void Point<T>::setXY(T _x, T _y) { x = _x; y = _y; }

template<typename T>
T Point<T>::getX() const { return x; }

template<typename T>
T Point<T>::getY() const { return y; }

template<typename T>
void Point<T>::print() { cout << x << ", " << y << endl; }

// ��Ŭ���� ���ø��� ����� ����ο� ������ ��� �ϳ��� ������Ͽ� �־�� ��.

int main() {
	Point<int> pt1(1, 2);				
	Point<double> pt2(1.1, 2.2);		
	Point<string> pt3("ABC", "XYZ");	

	pt1.print();
	pt2.print();
	pt3.print();

	return 0;
}