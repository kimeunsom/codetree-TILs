#include <iostream>
using namespace std;

void p1(int n) {
    if(--n>0) p1(n);
    cout << n << " ";
}

void p1(int n) {
    cout << n-- << " ";
    if(n>0) p1(n);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    p1(n);
    cout << "\n";
    p2(n);
    return 0;
}