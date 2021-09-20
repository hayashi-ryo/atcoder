#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N = 0;
    // 配列の定義
    cin >> N;
    vector <int64_t> vec_a(N);
    vector <int64_t> vec_b(N);
    vector <int64_t> vec_c(N);
    for (int i=0;i<N;i++) {cin >>vec_a.at(i);}
    for (int i=0;i<N;i++) {cin >>vec_b.at(i);}
    for (int i=0;i<N;i++) {cin >>vec_c.at(i);}
    // sort
    sort(vec_a.begin(), vec_a.end());
    sort(vec_b.begin(), vec_b.end());
    sort(vec_c.begin(), vec_c.end());
    vector <int64_t> con(N);

    int cnt=0,jc=-1,kc=0;
    for (int i=0;i<N;i++) {
        jc++;
        int fj=0,fk=0;
        for (int j=jc;j<N;j++) {
            if ( vec_a.at(i)<vec_b.at(j) ) {
                jc=j;
                fj=1;
                break;
            }
        }
        if (fj==1) {
            for (int k=kc;k<N;k++) {
                if ( vec_b.at(jc)<vec_c.at(k) ) {
                    kc=k+1;
                    fk=1;
                    cnt++;
                    break;
                }
            }
        }
        if (fk==0) {
            break;
        }
        
    }
    cout << cnt << endl;
}