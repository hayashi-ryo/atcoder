#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string a=s.substr(0,1);
    string b=s.substr(2,1);
    cout << stoi(a) * stoi(b) << endl;
}
