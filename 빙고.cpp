#include <iostream>
#include <time.h>
using namespace std;

int BingoCheck(const int* number) {     // ���� ������ Ȯ���ϴ� �Լ�
    bool BingoCheck;
    int Bingo = 0;

    for (int i = 0; i < 5; i++) { // ������ üũ
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

    for (int i = 0; i < 5; i++) { // ������ üũ
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

    for (int i = 0; i < 5; i++) { // \ �밢�� üũ
        BingoCheck = true;
        if (number[i * 6] != INT_MAX) {
            BingoCheck = false;
            break;
        }
    }
    if (BingoCheck)
        Bingo++;

    for (int i = 0; i < 5; i++) { // / �밢�� üũ
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

    for (int i = 0; i < 25; i++) {         // ������ �������� 1~25�� �ʱ�ȭ
        myNumber[i] = i + 1;
        aiNumber[i] = i + 1;
    }

    int iTemp, idx1, idx2;
    for (int i = 0; i < 100; i++) {        // �������� ���� ����
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

    int myBingo = 0, aiBingo = 0;           // ���� �� ���� �����ϴ� ����
    int mode;
    while (true) {
        cout << "1. Easy\n2. Hard" << endl;
        cout << "���̵��� �����ϼ���: ";
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
            cout << "�¸�, ������ �����մϴ�." << endl;
            break;
        }
        else if (aiBingo >= 5) {
            cout << "�й�, ������ �����մϴ�." << endl;
            break;
        }


        cout << "���ڸ� �Է��ϼ���(0: ����): ";       // player turn
        int iInput;
        cin >> iInput;

        if (iInput == 0)
            break;
        else if (iInput < 1 || iInput > 25)
            continue;


        // player turn�� �ٸ� ������ ����
        bool acc = true;
        for (int i = 0; i < 25; i++) {
            if (iInput == myNumber[i]) {
                acc = false;
                myNumber[i] = INT_MAX;
                break;
            }
        }
        if (acc)            // acc�� ���̸� �̹� �Էµ� ���� �ٽ� �ѹ� �Է��� ��
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
            for (int i = 0; i < 25; i++) {                      // ���� �ȵ� ���� ��� ����
                if (aiNumber[i] != INT_MAX) {
                    NotSelect[NotSelectCount] = aiNumber[i];
                    NotSelectCount++;
                }
            }
            iInput = NotSelect[rand() % NotSelectCount];        // ���� �ȵ� ���� ��Ͽ��� ���� ����
            break;

        case 2:                     // Hard mode
            int CountingStar, SelectLine, largest = 0;

            for (int i = 0; i < 5; i++) {       // �� �������� * ī��Ʈ
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

            for (int i = 0; i < 5; i++) {       // �� �������� * ī��Ʈ
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
            for (int i = 0; i < 5; i++) {       // / �밢�� * ī��Ʈ
                if (aiNumber[i * 6] == INT_MAX)
                    CountingStar++;
            }
            if (CountingStar < 5 && CountingStar >= largest) {
                largest = CountingStar;
                SelectLine = 10;
            }

            CountingStar = 0;
            for (int i = 0; i < 5; i++) {       // \ �밢�� * ī��Ʈ
                if (aiNumber[(i+1)*4] == INT_MAX)
                    CountingStar++;;
            }
            if (CountingStar < 5 && CountingStar >= largest) {
                largest = CountingStar;
                SelectLine = 11;
            }

            switch (SelectLine) {   // ���õ� �ٿ��� ��ȣ ����
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



        // computer turn�� �ٸ� ������ ����
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


        // ������ ���� ���� Ȯ��
        myBingo = BingoCheck(myNumber);
        aiBingo = BingoCheck(aiNumber);
        
    }

    return 0;
}