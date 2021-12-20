#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    //コンテスト参加時に提出したコード
    /*
    string s;
    cin >> s;
    string a=s.substr(0,1);
    string b=s.substr(2,1);
    cout << stoi(a) * stoi(b) << endl;
    */
    //解説みて最適化したコード
    char a, x, b;
    cin >> a >> x >> b;
    cout << (int)(a-'0') * (int)(b-'0') << endl;
}
