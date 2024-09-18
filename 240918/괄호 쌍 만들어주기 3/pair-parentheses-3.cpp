#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    int cnt=0;
    int temp;

    for(int i=0; i<a.length(); i++) {
        if(a[i]=='(') {
            temp=i;
            while(true) {
                i++;
                if(i==a.length()) {
                    break;
                } else if(a[i]==')') {
                    cnt++;
                }
            }
            i=temp; // 더해진 i 다시 백업
        }
    }

    cout << cnt;

    return 0;
}