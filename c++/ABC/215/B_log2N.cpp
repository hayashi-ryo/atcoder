#include <bits/stdc++.h>
using namespace std;
// powで計算してたら何故かダメだった後で確認する
int main() {
    int64_t N=0;
    cin >> N;

    int counta = -1;
    int64_t tmp = 1;
    for (int64_t i=0;i<1000000000000000000;i++) {
        if (tmp<=N) {
            counta++;
            tmp*=2;
        } else {
            break;
        }
    }

    cout << counta << endl;
}