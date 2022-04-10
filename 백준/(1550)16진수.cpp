#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    
    string str;
    long long sum = 0;

    cin >> str;

    for(int i = 0; i < str.length(); i++){
        
        if(str[i] >= 'A' && str[i] <= 'F')    // A ~ F
            sum += (str[i] - 55) * pow(16, str.length() - i - 1);

        else if(str[i] >= '0' && str[i] <= '9')  // 0 ~ 9
            sum += (str[i] - 48) * pow(16, str.length() - i - 1);
    }

    cout << sum << endl;

    return 0;
}