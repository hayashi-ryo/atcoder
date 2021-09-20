#include <bits/stdc++.h>
using namespace std;

int main() {
    // 型定義
    int a=0,b=0;
    cin >> a >> b;

    bitset<8> a_bit(a);
    bitset<8> b_bit(b);
    bitset<8> s = a_bit ^ b_bit;
    
    cout << s.to_ullong() << endl;
}