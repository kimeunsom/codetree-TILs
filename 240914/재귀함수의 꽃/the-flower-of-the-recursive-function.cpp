#include <iostream>
using namespace std;

void solution(int n) {

    if(n<1) return;

    cout << n << " ";
    solution(n-1);
    cout << n << " ";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    solution(n);
    return 0;
}