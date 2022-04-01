#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double pi = 3.141592;

	cout << setw(10) << pi << endl;                 // 10자리 확보 후 pi를 오른쪽으로 정렬 후 출력
	cout << setw(10) << setfill('0') << pi << endl; // 여백을 0으로 채우기
	cout << setfill(' ');						    // 위 문장 해제
	
	cout << setprecision(5) << pi << endl;          // 유효숫자를 지정한 갯수만큼 출력

	
	// 지금부터 나오는 문장들은 iomanip 헤더파일은 필요없지만 위 문장들과 쓰임이 비슷함
	
	cout.width(10);		// 다음에 출력할 때 10자리 확보 후 오른쪽으로 정렬
	cout << pi << endl;

	cout.width(10);
	cout.fill('0');     // 다음에 출력할 때 여백을 0으로 채우기(width와 사용)
	cout << pi << endl;
	cout.fill(' ');     // 여백을 다시 초기화 

	double ex_num = 123.456;

	cout.precision(1);       // 유효숫자갯수 설정
	cout << ex_num << endl;  // 1e+02는 1 x 10^2, 즉 100과 동일
	
	cout.precision(2);
	cout << ex_num << endl;  // 1.2e+02는 1.2 x 10^2, 즉 120과 동일

	cout.precision(0);       // precision 해제
	

	cout << ex_num << endl;
	cout << fixed;		    // 소수점 고정
	cout << ex_num << endl; 
	cout.precision(2);      // fixed 함수를 쓴 후 사용하면 정수 부분은 고정한 후 소수점 아래 유효숫자가 설정됨
	cout << ex_num << endl;
	



	
	cout.width(5);							// 5자리 확보
	cout.setf(ios::left, ios::adjustfield); // 왼쪽으로 정렬
	cout << "Hi" << endl;                  

	cout.width(5);                           // 5자리 확보
	cout.setf(ios::right, ios::adjustfield); // 오른쪽으로 정렬
	cout << "Hi" << endl;


	return 0;
}