#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // 입력
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i=0; i<N; i++)
        cin >> a[i];
    
    // bit는 2^N개 존재하는 부분 집합 전체를 대상으로 동작
    bool exist = false;
    vector<int> idx;
    for(int bit=0; bit<(1 << N); bit++){
        int sum = 0; // 부분 집합에 포함된 요소의 합
        idx.clear();
        for(int i=0; i<N; i++){
            // i번째 요소 a[i]가 부분 집합에 포함되는지 여부
            if(bit & (1 << i)){
                sum += a[i];
                idx.push_back(i);
            }
        }

        // sum이 W와 일치하는지 여부
        if(sum == W) {
            exist = true;
            break;
        }
    }

    // 결과 출력
    if (exist){
        for(int i=0; i<idx.size(); i++)
            cout << idx[i] << ' ';
        cout << endl;
    }
    else
        cout << "No Answer" << endl;
    
    return 0;
}