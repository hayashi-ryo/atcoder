#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string S="",T="";
    cin >> S >> T;
    int chgcnt=0;//交換回数2以上になったら強制終了
    int flug=0;
    for (int i=0;i<S.size();i++) {
        if (S.at(i)!=T.at(i)) {
            if (S.at(i+1)!=T.at(i)){
                flug++;
                break;
            } else {
                chgcnt++;
                i++;
            }
        }
        if(chgcnt>1) {
            flug++;
            break;
        }
    }
    if(flug==1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }


}