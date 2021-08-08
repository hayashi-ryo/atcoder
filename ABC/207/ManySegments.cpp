#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
    int N = 0;
    cin >> N;
    vector<int64_t> t(N);
    vector<int64_t> l(N);
    vector<int64_t> r(N);
    for (int i=0;i<N;i++) {
        cin >> t.at(i);
        int s=0,g=0;
            if (t.at(i)==1) {
                cin >> l.at(i) >> r.at(i);
            } else if (t.at(i)==2) {
                cin >> l.at(i);
                cin >> g;
                r.at(i) = g-1;
            } else if (t.at(i)==3) {
                cin >> s;
                cin >> r.at(i);
                l.at(i) = s+1;
            } else if (t.at(i)==4) {
                cin >> s >> g;
                l.at(i) = s+1;
                r.at(i) = g-1;
            }
    }

    int count = 0;
    for (int i=0;i<N;i++) {
        for (int j=i+1;j<N;j++) {
            // if ( ( (l.at(i)<=l.at(j)) && (l.at(j)<=r.at(i)) ) || ( (l.at(i)<=r.at(j)) && (r.at(j)<=r.at(i)) ) ) {
            count +=(max(l.at(i),l.at(j)) <= min(r.at(i),r.at(j)) );
        }
    }
    cout << count << endl;
}