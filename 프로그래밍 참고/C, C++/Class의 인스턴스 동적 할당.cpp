#include <iostream>
using namespace std;

class Point {
public:
	double x, y;
};

int main() {
	
	Point* pt1;

	pt1 = new Point; // 인스턴스를 동적으로 할당

	pt1->x = 10.0; // pt1->x는 (*pt1).x와 동일
	pt1->y = 20.0;

	cout << pt1->x << ' ' << pt1->y << endl;

	delete pt1; // 사용이 끝나면 꼭 delete 수행

	return 0;
}