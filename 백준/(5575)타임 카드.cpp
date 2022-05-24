#include <iostream>
using namespace std;

int main(){

    int time[6] = {0,0,0,0,0,0}, a[3] = {0,0,0}, b[3] = {0,0,0}, c[3] = {0,0,0};
    
    // a
    for(int i = 0; i < 6; i++)
        cin >> time[i];
    
    if(time[5] < time[2]){
        time[4]--;
        a[2] = 60 - (time[2] - time[5]);
    }
    else
        a[2] = time[5] - time[2];

    if(time[4] < time[1]){
        time[3]--;
        a[1] = 60 - (time[1] - time[4]);
    }
    else
        a[1] = time[4] - time[1];

    if(time[3] < time[0])
        a[0] = 24 - (time[0] - time[3]); 
    else
        a[0] = time[3] - time[0];


    // b
    for(int i = 0; i < 6; i++)
        cin >> time[i];

    if(time[5] < time[2]){
        time[4]--;
        b[2] = 60 - (time[2] - time[5]);
    }
    else
        b[2] = time[5] - time[2];

    if(time[4] < time[1]){
        time[3]--;
        b[1] = 60 - (time[1] - time[4]);
    }
    else
        b[1] = time[4] - time[1];

    if(time[3] < time[0])
        b[0] = 24 - (time[0] - time[3]); 
    else
        b[0] = time[3] - time[0];

    // c
    for(int i = 0; i < 6; i++)
        cin >> time[i];

    if(time[5] < time[2]){
        time[4]--;
        c[2] = 60 - (time[2] - time[5]);
    }
    else
        c[2] = time[5] - time[2];

    if(time[4] < time[1]){
        time[3]--;
        c[1] = 60 - (time[1] - time[4]);
    }
    else
        c[1] = time[4] - time[1];

    if(time[3] < time[0])
        c[0] = 24 - (time[0] - time[3]); 
    else
        c[0] = time[3] - time[0];


    for(int i = 0; i < 3; i++)
        cout << a[i] << ' ';
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << b[i] << ' ';
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << c[i] << ' ';
    cout << endl;



    return 0;
}