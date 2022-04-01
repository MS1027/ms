#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T> // 클래스 템플릿
class Point {
private:
	T x, y;
public:
	Point(T _x, T _y) : x(_x), y(_y) {}
	void setXY(T _x, T _y) { x = _x; y = _y; }
	T getX() const { return x; } // 멤버변수가 바뀌지 않으므로
	T getY() const { return y; } // const라고 적어주면 좋음.
	void print() { cout << x << ", " << y << endl; }
};


int main() {
	Point<int> pt1(1, 2);				// 클래스 템플릿의 객체를 만들 시에는
	Point<double> pt2(1.1, 2.2);		// T에 들어갈 데이터 형식을
	Point<string> pt3("ABC", "XYZ");	// 명시해주어야 함.

	pt1.print();
	pt2.print();
	pt3.print();

	return 0;
}