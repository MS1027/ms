#include <iostream>
using namespace std;

int main(){
    
    int time, sum = 0, m, s;

    for(int i = 0; i < 4; i++){
        cin >> time;
        sum += time;
    }

    m = sum / 60;
    s = sum - m*60;

    cout << m << '\n' << s << endl;

    return 0;
}