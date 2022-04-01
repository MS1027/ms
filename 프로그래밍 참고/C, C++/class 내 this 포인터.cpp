#include <iostream>
using namespace std;

class Point {
	double x;
public:
	void set_x(double x) {
		this->x = x; // this라는 포인터를 자동으로 생성하는데 호출한 인스턴스 자신의 주솟값을 가짐
	} // 굳이 이런걸 쓰는 이유는 매개변수와 멤버변수의 이름이 x로 같기 때문...
	double get_x() {
		return x;
	}
};

int main() {
	
	Point inst1, inst2;

	inst1.set_x(10.0); // 인스턴스의 멤버변수가
	inst2.set_x(20.0); // 각각 설정됨

	cout << inst1.get_x() << endl;
	cout << inst2.get_x() << endl;

	return 0;
}