#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count = 0;
    string S;
    cin >> S;

    for (int i=0;i<3;i++) {
        if (S.at(i) != '0') {
            count++;
        }
    }
    cout << count << endl;
}