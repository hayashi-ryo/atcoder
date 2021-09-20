#include <bits/stdc++.h>
using namespace std;

int main() {
    // 行と列は独立しているので、座標圧縮を行うことで実現させる
    int64_t H=0,W=0,N=0;
    cin >> H >> W >> N;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> vals_a(0);
    for (int i=0;i<N;i++) {
    cin >> a.at(i) >> b.at(i);
    vals_a.push_back(a[i]);
    } 
    // vector<int> vals_b=b;
    sort(vals_a.begin(), vals_a.end());
    // sort(vals_b.begin(), vals_b.end());
    vals_a.erase(unique(vals_a.begin(),vals_a.end()), vals_a.end());
}