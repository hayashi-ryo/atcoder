#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=1,b=1;
    char op;
    int N=10000;
    int flag = 0;
    while (flag==0) {
        cin >> a >> op >> b;
        int tmp=0;
        if (op=='?') {
            flag=1;
            continue;
        }
        if(op=='+') {
            tmp = a+b;
        } else if (op=='-') {
            tmp = a-b;
        } else if (op=='*') {
            tmp = a*b;
        } else if (op=='/') {
            tmp = a/b;
        }
        cout << tmp << endl;
    } 
}