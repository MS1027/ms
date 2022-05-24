#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int h, m, time, add_h, add_m;

    cin >> h >> m;
    cin >> time;

    add_h = time/60;
    add_m = time%60;

    h += add_h;
    m += add_m;

    if(m >= 60){
        m -= 60;
        h += 1;
    }

    if(h >= 24)
        h -= 24;
    
    cout << h << ' ' << m << endl;

    return 0;
}