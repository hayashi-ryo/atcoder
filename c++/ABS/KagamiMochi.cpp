#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 0;
    // 配列の定義
    cin >> N ;
    vector<int> s(N);
    for (int i=0;i<N;i++) {
        cin >> s.at(i);
    }

    // sort
    sort(s.begin(),s.end());
    int res = 1;
    s.push_back(0);
    for (int i=0;i<N;i++) {
        if (s.at(i)<s.at(i+1)) {
            res++;
        }

    }
    cout << res << endl;
}