#include <iostream>
using namespace std;

bool isRight(int n) {
    int sum = n%10 + n/10;
    if( !(n%2) && !(sum%5) ) {
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if(isRight(n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}