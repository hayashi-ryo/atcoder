#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int h,w;
    cin >> h >> w;
    vector<vector<int>> paint(h,vector<int>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) {
            string tmp=;
            cin >> tmp;
            if(tmp==".") {paint.at(i).at(j) = 0;} 
            else {
                try{
                    int num = stoi(tmp);
                    paint.at(i).at(j) = num;
                } catch(const std::invalid_argument& e){}
                }
        }
    }
    cout << "OK" << endl;
    for(int i=0; i<h; i++){
        cout << "i:" << i << endl;
        for(int j=0; j<w; j++) {
        cout << paint.at(i).at(j);
        }
        cout << endl;
        }
}