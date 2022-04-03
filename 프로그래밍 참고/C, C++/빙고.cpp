#include <iostream>
#include <time.h>

using namespace std;

int main() {

    srand((unsigned)time(NULL));
    int iNumber[25] = {};

    for (int i = 0; i < 25; i++) {
        iNumber[i] = i + 1;
    }

    int iTemp, idx1, idx2;
    for (int i = 0; i < 100; i++) {
        idx1 = rand() % 25;
        idx2 = rand() % 25;

        iTemp = iNumber[idx1];
        iNumber[idx1] = iNumber[idx2];
        iNumber[idx2] = iTemp;
    }

    int iBingo = 0;

    while (true) {

        system("cls");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (iNumber[i * 5 + j] == INT_MAX)
                    cout << "*\t";
                else
                    cout << iNumber[i * 5 + j] << "\t";
            }
            cout << endl;
        }

        cout << "Bingo Line: " << iBingo << endl;

        if (iBingo >= 5) {
            cout << "게임을 종료합니다." << endl;
            break;
        }


        cout << "숫자를 입력하세요(0: 종료): ";
        int iInput;
        cin >> iInput;

        if (iInput == 0)
            break;
        else if (iInput < 1 || iInput > 25)
            continue;

        bool acc = true;

        for (int i = 0; i < 25; i++) {
            if (iInput == iNumber[i]) {
                acc = false;
                iNumber[i] = INT_MAX;
                break;
            }
        }

        if (acc)
            continue;

        bool BingoCheck;
        iBingo = 0;

        for (int i = 0; i < 5; i++) {
            BingoCheck = true;
            for (int j = 0; j < 5; j++) {
                if (iNumber[i * 5 + j] != INT_MAX) {
                    BingoCheck = false;
                    break;
                }
            }
            if (BingoCheck)
                iBingo++;
        }

        for (int i = 0; i < 5; i++) {
            BingoCheck = true;
            for (int j = 0; j < 5; j++) {
                if (iNumber[i + 5 * j] != INT_MAX) {
                    BingoCheck = false;
                    break;
                }
            }
            if (BingoCheck)
                iBingo++;
        }

        for (int i = 0; i < 5; i++) {
            BingoCheck = true;
            if (iNumber[i * 6] != INT_MAX) {
                BingoCheck = false;
                break;
            }
        }
        if (BingoCheck)
            iBingo++;

        for (int i = 0; i < 5; i++) {
            BingoCheck = true;
            if (iNumber[(i + 1) * 4] != INT_MAX) {
                BingoCheck = false;
                break;
            }
        }
        if (BingoCheck)
            iBingo++;
    }

    return 0;
}