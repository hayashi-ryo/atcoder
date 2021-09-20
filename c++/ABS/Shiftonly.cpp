#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 0;
    bool flag = false;
    // 配列の定義
    cin >> N ;
    vector<int> s(N);
    for (int i=0;i<N;i++) {
        cin >> s.at(i);
        if (s.at(i)%2 != 0) {
            flag = true;
            break; 
        }
    }

    // 偶奇判定
    int c = 0;
    if (flag == false ) {
        for (int j=0;j<500;j++) {
            for (int i=0;i<N;i++) {
                if (s.at(i)%2 != 0) {
                    flag = true;
                    break;}
                s.at(i) /= 2;
            }
            if (flag) {
                break;
            }
            c++;
        }
    }

    cout << c << endl;
}