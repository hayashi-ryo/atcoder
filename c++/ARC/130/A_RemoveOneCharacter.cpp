#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    string s;
    cin >> n >> s;
    vector<char> si(n);
    for (int i=0;i<n;i++) {
        si.at(i) = s.at(i);
    }
    vector<char> sj=si;
    int ans=0;
    for (int i=0;i<n-2;i++) {
        vector<char> delsi(si.begin(),si.begin()+i);
        delsi.push_back(si.begin()+)
        for(int j=i+1;j<n-1;j++) {
            
        }
    } 
    equal(si.begin(), si.end(), sj.begin(), sj.end()) ?
        cout << "Vectors i_vec1 and i_vec2 are the same" << endl :
        cout << "Vectors i_vec1 and i_vec2 are not the same" << endl;
}