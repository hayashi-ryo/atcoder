#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string N="";
    cin >> N;
    vector<int> vec(N.size());
    for (int i=0;i<N.size();i++) {
        vec.at(i)=N.at(i);
        //cout << N.at(i) << endl;
    }
    int out=0;
    int couta =(N.size()+1)/2;
    for (int i=1;i<=couta;i++) {
        int tmp=0;
        for (int j=0;i<N.size();i++) {
            if(tmp>out) {
                out=tmp;
            }
        }
    }
    cout << out << endl;
}
