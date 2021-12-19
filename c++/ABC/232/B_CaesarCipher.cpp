#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    cin >> s >> t;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<int> s_vec(s.size());
    vector<int> t_vec(t.size());
    for (int i=0;i<s_vec.size();i++) {
        for (int j=0;j<26;j++) {
            if(s[i]==alphabet[j]){
                s_vec[i]=j;
                break;
            }
        }
    }
    for (int i=0;i<t_vec.size();i++) {
        for (int j=0;j<26;j++) {
            if(t[i]==alphabet[j]){
                t_vec[i]=j;
                break;
            }
        }
    }

    for (int i=0;i<26;i++) {
        // for (int j=0;j<s_vec.size();j++) {cout << s_vec[j] << endl;}
        if(s_vec[0]!=t_vec[0]) {
            for (int j=0;j<s_vec.size();j++) {
                s_vec[j]++;
                if(s_vec[j]==26) {s_vec[j]=0;} 
            }
        } else {break;}
    }
    if(s_vec==t_vec){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}