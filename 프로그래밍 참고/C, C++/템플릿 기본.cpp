#include <iostream>
#include <string>
#include <vector>
using namespace std;


template <typename T, typename V> // 선언된 T와 V는 매개변수로서 최소 한 번씩은 사용되어야 함.
//template <class T, typename V> 라고 해도 됨, 완전히 동일한 문장임.
bool less_than(T a, V b) { // 호출되는 문장에 따라 T와 V의 데이터타입이 결정됨. 객체가 올 수 있으니 const T&의 형태로 쓸 수도 있음.
	return a < b;
}

template<typename T> // 하나의 template이 하나의 함수에 적용됨.
T sum(const vector<T>& v) { // 반환값도 T로 치환 가능
	T result = 0;
	for (T elem : v)
		result += elem;

	return result;
}

int main() {

	cout << less_than(2, 3) << endl;		// int
	cout << less_than(2.2, 2.7) << endl;	// double 
//	cout << less_than(2, 2.7) << endl;		// typename V가 없다면 T의 형식을 규정할 수 없기 때문에 사용할 수 없음.
	cout << less_than(2, 2.7) << endl;		// T가 int, V가 double이 됨
	
	string s1 = "ABC";
	string s2 = "X";

	cout << less_than(s1, s2) << endl;		// 문자열의 길이와 상관없이 첫 인덱스부터 값을 비교하여 연산

	vector<int> v1{ 1, 2, 3 };
	vector<double> v2{ 1.1, 2.2, 3.3 };
	cout << sum(v1) << endl;				// 함수 오버로딩없이 template를 통해
	cout << sum(v2) << endl;				// 다른 데이터타입의 매개변수로 호출 가능

	return 0;
}