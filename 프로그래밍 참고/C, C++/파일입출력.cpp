#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	// 파일에 쓰기
	ofstream myfile;					        // ofstream형식의 myfile변수 생성
	string aline = "Writing this to a file.\n"; // 파일에 출력할 문자열을 저장할 변수 생성
	myfile.open("example_writing.txt");         // myfile변수를 통해 파일 열기
	myfile << aline;							// 파일에 문자열 출력
	while (aline != "quit") {					// 문자열이 quit가 아닌 경우 반복
		cout << "Enter a String to Writing('quit to terminate'): ";
		cin >> aline;
		if (aline == "quit")                    // 문자열이 quit인 경우 빠져나가기
			break;
		myfile << aline << endl;
	}
	myfile.close();                        // 파일 닫기(필수)





	// 파일로부터 읽기
	ifstream myfile2;					 // ifstream형식의 myfile2변수 생성
	string line;						 // 파일로부터 읽은 문자열을 저장할 변수 생성
	myfile2.open("example_reading.txt"); // myfile2변수를 통해 파일 열기
	if (myfile2.is_open()) {			 // 파일이 정상적으로 열려있으면 True를 반환
		while (getline(myfile2, line)) { // 파일의 한 줄(문자열)을 line 변수에 저장하여 반환(문자열은 비어있지 않으면 참)
			cout << line << endl;
		}
	}
	else                                 // 파일이 정상적으로 열리지 않았을 때 출력
		cout << "File is not opened." << endl;

	return 0;
}