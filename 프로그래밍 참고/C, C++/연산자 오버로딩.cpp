#include <iostream>
using namespace std;

class Point {
	double x, y;

public:
	Point();
	Point(int x, int y);
	void setPoint(int x, int y);
	int getX(void) const;
	int getY(void) const;
	Point operator+(const Point& point);
	Point& operator=(const Point& point);
	// 모든 함수를 선언만 하고 정의는 함수 밖에서 했음
};

// default constructor
Point::Point(){
	x = y = 0;
	// 포인터 생성시 매개변수가 없으면 멤버변수 x, y를 0으로 초기화
}		

// 사용자 정의 constructor
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
	// 포인터 생성 시 매개변수 x, y를 받아 멤버변수 x, y를 초기화
}	

// x, y값 설정
void Point::setPoint(int x, int y) {
	this->x = x;
	this->y = y;
	// 매개변수 x, y를 입력받아 멤버변수 x, y로 설정
}	

// x값 반환
int Point::getX(void) const {
	return this->x;
	// 객체의 멤버변수 x값 반환
}

// y값 반환
int Point::getY(void) const {
	return this->y;
	// 객체의 멤버변수 y값 반환
}

// + 연산자 오버로딩
Point Point::operator+(const Point& point){
	Point result(this->x + point.getX(), this->y + point.getY());
	return result;

	/*★★★★★ 
	 * Point클래스의 객체를 연산하기 위해 + 연산자를 오버로딩.
	 * 반환값이 Point인 것을 보아 Point의 객체를 반환하는 것을 알 수 있고
	 * 인자가 const Point&인 것을 보아 객체를 인자로 받는데 값을 변경하지 못하도록 함.
	 * 함수 내부를 보면 Point 클래스의 객체로 result를 선언하고 사용자 정의 생성자를 사용함.
	 * 생성자를 통해 객체 result의 멤버변수 x,y를 각각
	 * '+ 연산자를 호출한 객체의 x값' + '인자로 받은 객체의 x값'
	 * '+ 연산자를 호출한 객체의 y값' + '인자로 받은 객체의 y값'으로 초기화함.
	 * 이후 객체 result를 반환값으로 하고 함수를 종료함.(함수 종료시 result 객체는 임시적인(?) 객체이므로 delete 됨.
	 *
	 * 예를 들어, Point의 객체 A와 B가 있다고 가정하자.
	 * 그럼 A + B를 수행할 시 이 함수가 호출되는데
	 * 함수가 호출되면 임시로 Point의 객체인 result를 생성하여
	 * 이 때, 생성자의 매개변수로 (A->x + B->x, A->y + B->y)를 넘기는 것임.
	 * 즉, A + B를 통해 '새로운 객체'를 만든 것임.
	 * A.operator+(B)로 표현하는 것과 동일한 의미임. (오히려 이게 객체명.함수명(매개변수)형태라 더 이해하기 쉬워보임...)
	 *
	 * 그럼 main 함수에서 사용된 문장을 확인해보자.
	 * *pP2 = *pP1 + *pP2; 에서 *pP1 + *pP2만 주목하자.
	 * *pP1, *pP2가 위 예시에서 A, B라고 생각하면 됨
	 * *pP1 + *pP2를 수행하므로써 새로운 객체가 반환되는 것
	 * 그 다음 연산인 = 을 통해 *pP2에 넣어지게 되는데 아래 함수에서 설명하겠음
	 */
}

// = 연산자 오버로딩
Point& Point::operator=(const Point& point) {
	this->x = point.getX();
	this->y = point.getY();
	return *this;

	/*★★★★★
	 * Point클래스의 객체를 연산하기 위해 = 연산자를 오버로딩.
	 * 반환값이 Point&인 것을 보아 객체의 참조자를 반환하는 것을 알 수 있고
	 * 인자가 const Point&인 것을 보아 객체를 인자로 받는데 값을 변경하지 못하도록 함.
	 * 함수 내부를 보면 함수를 호출한 객체의 멤버변수 x, y를 각각
	 * 인자로 전달된 객체의 x, y값으로 초기화 함.
	 * 이후 다시 이 객체를 반환하는데 this는 포인터이므로 *this 형태로 반환.
	 *
	 * 예를 들어, Point의 객체 A와 B가 있다고 가정하자. 
	 * 그럼 A = B를 수행할 시 이 함수가 호출되는데 이 함수는 A가 호출했다고 생각하자.
	 * 함수가 호출되면 this포인터를 통해 A의 멤버변수 x, y를
	 * 인자로 전달받은 객체인 B의 멤버변수 x, y를 반환하여(getX(), getY()함수를 통해) 초기화시킴.
	 * 이후 객체(this는 함수를 호출한 객체 자신을 가리키는 포인터)를 A에 반환.
	 * A.operator=(B)로 표현하는 것과 동일한 의미임. (이것도 오히려 객체명.함수명(매개변수)형태라 더 이해하기 쉬워보임...)
	 *
	 * 그럼 main 함수에서 사용된 문장을 확인해보자.
	 * *pP2 = *pP1 + *pP2; 에서 *pP1 + *pP2를 통해 새로운 객체가 반환된 것을 알고 있음(객체를 임시로 temp라고 불러보겠음)
	 * 그렇다면 + 연산 이후에는 *pP2 = temp가 수행된다는 것임
	 * *pP2, temp가 위 예시의 A, B라고 생각하면 됨.
	 * *pP2 = temp를 수행하므로써 *pP2의 멤버변수 x, y를 각각
	 * = 연산의 인자로 받은 temp객체의 멤버변수 x, y로 초기화 되는 것임.
	 */
}

// << 연산자 오버로딩(Point 클래스의 메서드가 아님)
ostream& operator<<(ostream& os, const Point& point) {
	return os << "(" << point.getX() << ',' << point.getY() << ")\n";

	/*
	 * 이 소스 파일에서는 이 오버로딩 함수가 쓰인 이유는 그저 객체를 원하는 형태로 출력하기 위함이다.
	 * 인자로 ostream의 객체와 Point클래스의 객체를 받아들임.
	 * 아래 main함수의 cout << *pP2 << endl; 문장이 이 함수를 호출하는 형태임.
	 * << endl;을 제외한 cout << *pP2; 를 살펴보자.
	 * 'ostream의 객체인 cout'과 'Point의 객체인 *pP2'를 <<로 연산하는 형태인 것임.
	 * ★따라서 반환값의 문장은 즉,
	 * ★cout << "(" << pP2->getX() << ',' << pP2->getY() << ")\n";의 의미가 되는 것임.
	*/
}

// main 함수
int main() {
	
	Point* pP1, * pP2;
	pP1 = new Point();
	pP2 = new Point(1, 2);

	pP1->setPoint(10, 20);

	*pP2 = *pP1 + *pP2;

	cout << "[X:" << pP1->getX() << "][Y:" << pP1->getY() << ']' << endl;
	cout << *pP2 << endl;
	
	delete pP1;
	delete pP2;

	return 0;
}