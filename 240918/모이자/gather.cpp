#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int min_dis = INT_MAX; //초기값 할당
    int d=0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            d += a[j]*abs(i-j);
        }
        if(min_dis>d) min_dis=d;
        d=0;
    }

    cout << min_dis;

    return 0;
}