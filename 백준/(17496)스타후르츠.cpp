#include <iostream>
using namespace std;

int main(){
    
    int N, T, C, P, EA;

    cin >> N >> T >> C >> P;
    
    EA = N/T;
    if(N % T == 0)
        EA--;

    cout << EA * C * P << endl;

    return 0;
}