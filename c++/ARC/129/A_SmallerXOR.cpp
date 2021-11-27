#include <iostream>
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

unsigned int binToUInt(const string &str)
{
    unsigned int val = 0;
    for(int i = 0; i < (int)str.size(); ++i) {
        switch (str[i]) {
        case '0':
            val *= 2;
            break;
        case '1':
            val = val * 2 + 1;
            break;
        }
    }
    return val;
}

int main() {
    int64_t N,L,R;
    cin >> N >> L >> R;
    bitset<64> bitN(N);
    /* ビット演算
    A^B
    */
    int cnt=0;
    for (int i=L;i<=R;i++) {
        bitset<64> bit_XORN(N^i);
        string string_XORN=bit_XORN.to_string();
        int64_t tm = binToUInt(string_XORN);
        if(tm<N) {cnt++;}
    }
    cout << cnt << endl;
}