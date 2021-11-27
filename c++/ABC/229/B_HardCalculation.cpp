#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int64_t a,b;
    cin >> a >> b;
    int cnta=0,cntb=0;
    int64_t tmpa=a,tmpb=b;
    while(tmpa!=-0){
        tmpa/=10;
        cnta++;
    }
    while(tmpb!=0){
        tmpb/=10;
        cntb++;
    }
    string stra = to_string(a);
    string strb = to_string(b);
    int flug=0;
    for (int i=1;i<100;i++) {
        if((i>cnta)or(i>cntb)) {break;}
        int N = int(stra.at(cnta-i)-'0')+int(strb.at(cntb-i)-'0');
        if(N>=10) {
            flug=1;
            break;
        }
    }
    if(flug){
        cout << "Hard" << endl;
    } else {
        cout << "Easy" << endl;
    }
}