#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int K=0;
    string a,b;
    cin >> K >> a >>b;
    int64_t cnt_a=0,cnt_b=0;
    int a_size=a.length(),b_size=b.length();
    for (int i=0;i<a_size;i++) {
        int tmp_a = std::stoi(a.substr(i,1));
        cnt_a+=pow(K,a_size-1-i)*tmp_a;
        // cout << i << " " << cnt_a << endl;    
    }
    for (int i=0;i<b_size;i++) {
        int tmp_b = std::stoi(b.substr(i,1));
        cnt_b+=pow(K,b_size-1-i)*tmp_b;
        // cout << i << " " << cnt_b << endl;    
    }

    cout << cnt_a*cnt_b << endl;
}