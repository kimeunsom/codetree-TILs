#include <iostream>
using namespace std;

int solution(int a, int b, int c) {
    int min = 0;
    if(a>b) {
        min = b;
    } else {
        min = a;
    }

    if(min > c) min = c;

    return min;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    cout << solution(a,b,c);
    return 0;
}