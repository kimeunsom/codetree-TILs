#include <iostream>
using namespace std;

void solution(int n) {
    for(int i=0; i<n; i++) {
        cout << "* ";
    }
    cout << "\n";

    if(n>1) solution(n-1);

    for(int i=0; i<n; i++) {
        cout << "* ";
    }
    cout << "\n";

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    solution(n);
    return 0;
}