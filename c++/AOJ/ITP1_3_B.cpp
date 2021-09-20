#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=1000000;
    int tmp=0;
    for (int i=1;i<N;i++) {
        cin >> tmp;
        if (tmp==0) {
            break;
        }
        cout << "Case " << i << ": " << tmp << endl;
    }
}