#include <iostream>
#include <time.h>
using namespace std;

int BingoCheck(const int* number) {     // 빙고 개수를 확인하는 함수
    bool BingoCheck;
    int Bingo = 0;

    for (int i = 0; i < 5; i++) { // 가로줄 체크
        BingoCheck = true;
        for (int j = 0; j < 5; j++) {
            if (number[i * 5 + j] != INT_MAX) {
                BingoCheck = false;
                break;
            }
        }
        if (BingoCheck)
            Bingo++;
    }

    for (int i = 0; i < 5; i++) { // 세로줄 체크
        BingoCheck = true;
        for (int j = 0; j < 5; j++) {
            if (number[i + 5 * j] != INT_MAX) {
                BingoCheck = false;
                break;
            }
        }
        if (BingoCheck)
            Bingo++;
    }

    for (int i = 0; i < 5; i++) { // \ 대각선 체크
        BingoCheck = true;
        if (number[i * 6] != INT_MAX) {
            BingoCheck = false;
            break;
        }
    }
    if (BingoCheck)
        Bingo++;

    for (int i = 0; i < 5; i++) { // / 대각선 체크
        BingoCheck = true;
        if (number[(i + 1) * 4] != INT_MAX) {
            BingoCheck = false;
            break;
        }
    }
    if (BingoCheck)
        Bingo++;

    return Bingo;
}

int main() {

    srand((unsigned)time(NULL));
    int myNumber[25] = {};
    int aiNumber[25] = {};

    for (int i = 0; i < 25; i++) {         // 각각의 빙고판을 1~25로 초기화
        myNumber[i] = i + 1;
        aiNumber[i] = i + 1;
    }

    int iTemp, idx1, idx2;
    for (int i = 0; i < 100; i++) {        // 빙고판을 섞는 과정
        idx1 = rand() % 25;
        idx2 = rand() % 25;

        iTemp = myNumber[idx1];
        myNumber[idx1] = myNumber[idx2];
        myNumber[idx2] = iTemp;

        idx1 = rand() % 25;
        idx2 = rand() % 25;

        iTemp = aiNumber[idx1];
        aiNumber[idx1] = aiNumber[idx2];
        aiNumber[idx2] = iTemp;
    }

    int myBingo = 0, aiBingo = 0;           // 빙고 줄 수를 저장하는 변수
    int mode;
    while (true) {
        cout << "1. Easy\n2. Hard" << endl;
        cout << "난이도를 선택하세요: ";
        cin >> mode;
        
        if (mode == 1 || mode == 2)
            break;
    }

    int NotSelect[25] = {};
    int NotSelectCount;



    while (true) {

        system("cls");

        cout << "=============== Player ===============" << endl;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (myNumber[i * 5 + j] == INT_MAX)
                    cout << "*\t";
                else
                    cout << myNumber[i * 5 + j] << "\t";
            }
            cout << endl;
        }
        cout << "Player's Bingo Line: " << myBingo << endl << endl;

        if(mode == 1)
            cout << "=========== Computer(Easy) ===========" << endl;
        else
            cout << "=========== Computer(Hard) ===========" << endl;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (aiNumber[i * 5 + j] == INT_MAX)
                    cout << "*\t";
                else
                    cout << aiNumber[i * 5 + j] << "\t";
            }
            cout << endl;
        }
        cout << "Coumputer's Bingo Line: " << aiBingo << endl << endl;




        if (myBingo >= 5) {
            cout << "승리, 게임을 종료합니다." << endl;
            break;
        }
        else if (aiBingo >= 5) {
            cout << "패배, 게임을 종료합니다." << endl;
            break;
        }


        cout << "숫자를 입력하세요(0: 종료): ";       // player turn
        int iInput;
        cin >> iInput;

        if (iInput == 0)
            break;
        else if (iInput < 1 || iInput > 25)
            continue;


        // player turn에 다른 빙고판 갱신
        bool acc = true;
        for (int i = 0; i < 25; i++) {
            if (iInput == myNumber[i]) {
                acc = false;
                myNumber[i] = INT_MAX;
                break;
            }
        }
        if (acc)            // acc가 참이면 이미 입력된 수를 다시 한번 입력한 것
            continue;

        for (int i = 0; i < 25; i++) {
            if (iInput == aiNumber[i]) {
                aiNumber[i] = INT_MAX;
                break;
            }
        }


        switch (mode) {             // computer turn

        case 1:                     // Easy mode
            NotSelectCount = 0;
            for (int i = 0; i < 25; i++) {                      // 선택 안된 숫자 목록 생성
                if (aiNumber[i] != INT_MAX) {
                    NotSelect[NotSelectCount] = aiNumber[i];
                    NotSelectCount++;
                }
            }
            iInput = NotSelect[rand() % NotSelectCount];        // 선택 안된 숫자 목록에서 숫자 선택
            break;

        case 2:                     // Hard mode
            int CountingStar, SelectLine, largest = 0;

            for (int i = 0; i < 5; i++) {       // 각 가로줄의 * 카운트
                CountingStar = 0;
                for (int j = 0; j < 5; j++) {
                    if (aiNumber[i * 5 + j] == INT_MAX)
                        CountingStar++;
                }
                if (CountingStar < 5 && CountingStar >= largest) {
                    largest = CountingStar;
                    SelectLine = i;
                }
            }

            for (int i = 0; i < 5; i++) {       // 각 세로줄의 * 카운트
                CountingStar = 0;
                for (int j = 0; j < 5; j++) {
                    if (aiNumber[i + 5 * j] == INT_MAX)
                        CountingStar++;
                }
                if (CountingStar < 5 && CountingStar >= largest) {
                    largest = CountingStar;
                    SelectLine = i + 5;
                }
            }

            CountingStar = 0;
            for (int i = 0; i < 5; i++) {       // / 대각선 * 카운트
                if (aiNumber[i * 6] == INT_MAX)
                    CountingStar++;
            }
            if (CountingStar < 5 && CountingStar >= largest) {
                largest = CountingStar;
                SelectLine = 10;
            }

            CountingStar = 0;
            for (int i = 0; i < 5; i++) {       // \ 대각선 * 카운트
                if (aiNumber[(i+1)*4] == INT_MAX)
                    CountingStar++;;
            }
            if (CountingStar < 5 && CountingStar >= largest) {
                largest = CountingStar;
                SelectLine = 11;
            }

            switch (SelectLine) {   // 선택된 줄에서 번호 선택
            case 0:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i] != INT_MAX) {
                        iInput = aiNumber[i];
                        break;
                    }
                }
                break;
            case 1:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i + 5] != INT_MAX) {
                        iInput = aiNumber[i + 5];
                        break;
                    }
                }
                break;
            case 2:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i + 10] != INT_MAX) {
                        iInput = aiNumber[i + 10];
                        break;
                    }
                }
                break;
            case 3:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i + 15] != INT_MAX) {
                        iInput = aiNumber[i + 15];
                        break;
                    }
                }
                break;
            case 4:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i + 20] != INT_MAX) {
                        iInput = aiNumber[i + 20];
                        break;
                    }
                }
                break;
            case 5:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i * 5] != INT_MAX) {
                        iInput = aiNumber[i * 5];
                        break;
                    }
                }
                break;
            case 6:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i * 5 + 1] != INT_MAX) {
                        iInput = aiNumber[i * 5 + 1];
                        break;
                    }
                }
                break;
            case 7:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i * 5 + 2] != INT_MAX) {
                        iInput = aiNumber[i * 5 + 2];
                        break;
                    }
                }
                break;
            case 8:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i * 5 + 3] != INT_MAX) {
                        iInput = aiNumber[i * 5 + 3];
                        break;
                    }
                }
                break;
            case 9:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i * 5 + 4] != INT_MAX) {
                        iInput = aiNumber[i * 5 + 4];
                        break;
                    }
                }
                break;
            case 10:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[i * 6] != INT_MAX) {
                        iInput = aiNumber[i * 6];
                        break;
                    }
                }
                break;
            case 11:
                for (int i = 0; i < 5; i++) {
                    if (aiNumber[(i + 1) * 4] != INT_MAX) {
                        iInput = aiNumber[(i + 1) * 4];
                        break;
                    }
                }
                break;
            }

            break;
        }



        // computer turn에 다른 빙고판 갱신
        for (int i = 0; i < 25; i++) {
            if (iInput == myNumber[i]) {
                myNumber[i] = INT_MAX;
                break;
            }
        }
        for (int i = 0; i < 25; i++) {
            if (iInput == aiNumber[i]) {
                aiNumber[i] = INT_MAX;
                break;
            }
        }


        // 각각의 빙고 개수 확인
        myBingo = BingoCheck(myNumber);
        aiBingo = BingoCheck(aiNumber);
        
    }

    return 0;
}