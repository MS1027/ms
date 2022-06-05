#include <iostream>
#include <vector>
using namespace std;

const int INF = INT_MAX;

int main(){
    
    // 입력
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++)
        cin >> a[i];
    
    // 두번째로 작은 값 찾기
    int minimum_value = INF, second_value = INF;
    for(int i=0; i<N; i++){
        // a[i]가 최소값보다 작은 경우
        if(a[i] < minimum_value){
            // 기존 최소값을 두번째값에 저장하고, 최소값 갱신
            second_value = minimum_value;
            minimum_value = a[i];
        }
        // a[i]가 최소값보다 크고 두번째값보다 작은 경우
        else if(a[i] < second_value)
            second_value = a[i];
    }

    // 결과 출력
    cout << second_value << endl;

    return 0;
}