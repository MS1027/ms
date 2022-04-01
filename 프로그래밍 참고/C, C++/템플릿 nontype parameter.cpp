#include <iostream>
using namespace std;

template <int N>
int scale(int value) {
	return value * N;
}

template<typename T, int N>
T scale(const T& value) {
	return value * N;
}

int main() {

	cout << scale<3>(5) << endl;
	cout << scale<4>(10) << endl;

	cout << scale<double, 3>(5.3) << endl;
	cout << scale<int, 4>(10) << endl;


	return 0;
}