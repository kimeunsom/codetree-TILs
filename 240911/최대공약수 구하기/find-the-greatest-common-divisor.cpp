#include <iostream>
using namespace std;

void findD(int n, int m) {
    int divisor;
    for(int i=1; i<=max(n,m); i++) {
        if(n%i==0 && m%i==0) {
            divisor = i;
        }
    }

    cout << divisor;
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    findD(n,m);
    return 0;
}