#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0,M=0;
    cin >> N >> M;
    vector<vector<int64_t>> vec(N,vector<int64_t>(M));
    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            cin >> vec.at(i).at(j);
        }
    }
    /*
    検査方針
    1:an1+1=a+1 の等差数列であること
    2:mod12..60となること
    3:1行下の値が+7であること    
    */
    //1行目の等差数列チェック
    int diff=0;
    int flug=0;
    for (int j=1;j<M;j++) {
        diff = vec.at(0).at(j)-vec.at(0).at(0);
        if( diff!=j ){
            flug=1;
            break;
        }
    }
    //1行目のmod検査
    int base=vec.at(0).at(0)%7;
    for (int j=1;j<M;j++) {
        if ((base+M)>8) {
            flug=1;
            break;
        }
        int tmpMod=vec.at(0).at(j)%7;
        if( (tmpMod!=(base+j) ) )
            if(not((tmpMod==0)and((vec.at(0).at(j-1)%7)==6)) ) {
                flug=1;
                break;
            }
        if(flug) {break;}
    }
    //2行目以降の検査
    for (int i=1;i<N;i++) {
        for (int j=0;j<M;j++) {
            if( (vec.at(0).at(j)+7*i)!=vec.at(i).at(j) ) {
                flug=1;
                break;
            }
        }
        if(flug) {break;}
    }
    if(flug){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}