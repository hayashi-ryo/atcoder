#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int H=0,W=0;
    cin >> H >> W;
    vector<vector<int64_t>> vec(H,vector<int64_t>(W));

    for (int i=0;i<H;i++) {
        for (int j=0;j<W;j++) {
            cin >> vec.at(i).at(j);
        }
    }
    int flug=0;
    for (int i=0;i<H;i++) {
        for (int j=0;j<W;j++) {
            for (int ik=i+1;ik<H;ik++) {
                for (int jk=j+1;jk<W;jk++) {
                    // cout << (vec.at(i).at(j)+vec.at(ik).at(jk)) << endl;
                    // cout << (vec.at(ik).at(j)-vec.at(i).at(jk)) << endl;
                    // cout << vec.at(ik).at(j) << endl;
                    // cout << vec.at(i).at(jk) << endl;
                    if ((vec.at(i).at(j)+vec.at(ik).at(jk))>(vec.at(ik).at(j)+vec.at(i).at(jk))) {
                        flug=1;
                        // cout << i << endl;
                        // cout << j<< endl;
                        // cout << ik << endl;
                        // cout << jk << endl;
                        break;
                    }
            }
            if (flug==1) {break;}
        }
        if (flug==1) {break;}
    }
    if (flug==1) {break;}
    }

    if (flug==1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}