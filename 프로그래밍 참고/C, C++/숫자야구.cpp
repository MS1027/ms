#include <iostream>
#include <ctime>

using namespace std;

int main() {

	srand((unsigned)time(NULL));

	int arr[4] = {};
	for (int i = 0; i < 4; i++) {
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++) {
			if (arr[j] == arr[i]) {
				i--;
				break;
			}
		}
	}

	int temp, idx1, idx2;
	for (int i = 0; i < 100; i++) {
		idx1 = rand() % 4;
		idx2 = rand() % 4;

		temp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = temp;
	}

	cout << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t" << arr[3] << endl;
		
	int input[4];

	while (1) {

		cout << "1 ~ 9 사이의 숫자 중 3개를 입력하세요(0: 종료): ";
		cin >> input[0] >> input[1] >> input[2] >> input[3];

		if ((input[0] < 0 || input[0] > 9) ||
			(input[1] < 0 || input[1] > 9) ||
			(input[2] < 0 || input[2] > 9) ||
			(input[3] < 0 || input[3] > 9)) {
			cout << "잘못된 숫자를 입력하였습니다." << endl;
			continue;
		}
		else if ((input[0] == input[1]) || (input[0] == input[2]) || (input[0] == input[3]) ||
			(input[1] == input[2]) || (input[1] == input[3]) || (input[2] == input[3])) {
			cout << "중복된 숫자를 입력하였습니다." << endl;
			continue;
		}

		int strike = 0, ball = 0;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (arr[i] == input[j]) {
					if (i == j)
						strike++;
					else
						ball++;
					break;
				}
			}
		}

		if (strike == 4) {
			cout << "숫자를 모두 맞췄습니다." << endl;
			break;
		}
		else if (strike == 0 && ball == 0)
			cout << "Out" << endl;
		else
			cout << strike << "strike " << ball << "ball" << endl;

	}

	return 0;
}