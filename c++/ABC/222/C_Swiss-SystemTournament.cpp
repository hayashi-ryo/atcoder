#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int judge(string a,string b) {
    // 引き分けなら-1,前者勝ちなら1,後者勝ちなら0
    int ans=0;
    if (a==b) {ans=-1;}
    else if(a=="G" and b=="C") {ans=1;}
    else if(a=="C" and b=="P") {ans=1;}
    else if(a=="P" and b=="G") {ans=1;}
    return ans;
}

int main() {
    int N=0,M=0;
    cin >> N >> M;
}