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

template<typename T> // 선언부/구현부 분리 시 각 메소드마다 템플릿을 적어줘야 함.
Point<T>::Point(T _x, T _y) : x(_x), y(_y) {} // 외부에서 메소드 정의 시 클래스 템플릿의 경우 보는 것과 같이 적어줘야 함.

template<typename T>
void Point<T>::setXY(T _x, T _y) { x = _x; y = _y; }

template<typename T>
T Point<T>::getX() const { return x; }

template<typename T>
T Point<T>::getY() const { return y; }

template<typename T>
void Point<T>::print() { cout << x << ", " << y << endl; }

// ★클래스 템플릿을 만들면 선언부와 구현부 모두 하나의 헤더파일에 넣어야 함.

int main() {
	Point<int> pt1(1, 2);				
	Point<double> pt2(1.1, 2.2);		
	Point<string> pt3("ABC", "XYZ");	

	pt1.print();
	pt2.print();
	pt3.print();

	return 0;
}