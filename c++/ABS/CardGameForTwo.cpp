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

    // sortして最大値をそれぞれ取得
    sort(s.rbegin(),s.rend());
    int A=0,B=0;
    int c=0;
    for (int i=0;i<N;i++) {
        if(c%2 == 0) {
            A += s.at(i);
        } else {
            B += s.at(i);
        }
        c++;
    }
    cout << A-B << endl;
}