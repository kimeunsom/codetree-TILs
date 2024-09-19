#include <iostream>
using namespace std;

int solution(int k, int coin[], int n) {
    int ans=0;
    int q;

    for(int i=n-1; i>=0; i--) {
        if(k>coin[i]) {
            q = k/coin[i];
            ans += q;
            k -= q*coin[i];
        }
    }

    return ans;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;

    int coin[n];
    for(int i=0; i<n; i++) {
        cin >> coin[i];
    }

    cout << solution(k, coin, n);


    
    return 0;
}