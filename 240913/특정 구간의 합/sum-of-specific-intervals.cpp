#include <iostream>
#include <vector>
using namespace std;

vector<int> A;

void sum_A(int m, vector<pair<int,int>> &numPair) {
    int sum=0;

    for(int i=0; i<m; i++) {
        sum=0;

        for(int j=numPair[i].first; j<=numPair[i].second; j++) {
            sum += A[j-1];
        }
        cout << sum << "\n";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, temp, temp2;
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cin >> temp;
        A.push_back(temp);
    }

    vector<pair<int,int>> numPair;
    for(int i=0; i<m; i++) {
        cin >> temp >> temp2;
        numPair.push_back(make_pair(temp, temp2));
    }

    sum_A(m, numPair);

    return 0;
}