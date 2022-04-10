#include <iostream>
using namespace std;

int main(){
    
    int chess[6] = {1, 1, 2, 2, 2, 8}, num[6];

    for(int i = 0; i < 6; i++)
        cin >> num[i];

    for(int i = 0; i < 6; i++)
        cout << chess[i] - num[i] << ' ';
    cout << endl;

    return 0;
}