#include <iostream>

using namespace std;

int main(){
    
    int num[5], sum = 0;

    for(int i = 0; i < 5; i++)
        cin >> num[i];

    for(int i = 0; i < 5; i++)
       sum += num[i] * num[i];

    cout << sum%10 << endl; 

    return 0;
}