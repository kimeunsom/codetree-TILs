#include <iostream>
using namespace std;

bool leapYear (int y) {
    if(y%4==0) {
        if(y%100==0) {
            if(y%400==0) {
                return true; // 4, 400의 배수
            }
        } else {
            return true; // 4의 배수면서 100의 배수 아닌.
        }
    }
    return false;
}

bool isExist(int y, int m, int d) {
    int max_days = 31;

    switch(m) {
        case 4 :
        case 6 :
        case 9 :
        case 11 :  
            max_days = 30;
            break;
    }

    if(m==2) {
        if(leapYear) {
            max_days = 29;
        } else {
            max_days = 28;
        }
    }

    if(d>max_days) {
        return false;
    }

    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y,m,d;
    cin >> y >> m >> d;

    if(!isExist(y, m, d)) {
        cout << -1;
    } else if(m<=5 && m>=3) {
        cout << "Spring";
    } else if(m<=8 && m>=6) {
        cout << "Summer";
    } else if(m<=11 && m>=9) {
        cout << "Fall";
    } else {
        cout << "Winter";
    }
    return 0;
}