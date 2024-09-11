#include <iostream>
using namespace std;

void solution(int n) {
    int num = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << num++ << " ";
            if(num>9) num=1;
        }   
        cout << "\n";
    }
}
 
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    solution(n);
    return 0;
}