#include <bits/stdc++.h>
using namespace std;

int main() {
    // 型定義
    int N=0;
    cin >> N;
    vector<int64_t> vec(N);
    vector<int64_t> vec_sub(N);
    for (int i=0;i<N;i++) {
        cin >> vec.at(i);
        vec_sub.at(i)=vec.at(i);
        }

        sort(vec.rbegin(),vec.rend());
        int ans = 0;
        int64_t tmp = vec.at(1);
        for (int i=0;i<N;i++) {
            // cout << "tmp" << tmp << endl;
            // cout << "vec_sub" << vec_sub.at(i) << endl;
            if(vec_sub.at(i)==tmp){
                ans = i;
                break;
            }
        }

        cout << ans+1 << endl;
}