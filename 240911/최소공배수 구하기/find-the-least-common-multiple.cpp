#include <iostream>
using namespace std;

void getLcd(int n, int m) {
    int gcd = 1;
    for(int i=1; i<=min(n,m); i++) {
        if(n%i==0 && m%i==0) gcd = i;
    }
    cout << n*m/gcd;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n,m;
    cin >> n >> m;

    getLcd(n,m);
    return 0;
}