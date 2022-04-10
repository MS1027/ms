#include <iostream>
using namespace std;

int main() {

    int L, P, num[5];

    cin >> L >> P;

    for (int i = 0; i < 5; i++)
        cin >> num[i];

    for (int i = 0; i < 5; i++)
        cout << num[i] - L * P << ' ';

    cout << endl;

    return 0;
}