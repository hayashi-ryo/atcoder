#include <iostream>
#include <vector>
using namespace std;

int digit(int n){
    int sum =0;
    for (int i=0;i<=5;i++) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N=0,A=0,B=0;
    cin >> N >> A >> B;
    
    int res = 0;
    
    for (int i=0;i<=N;i++) {
        if(digit(i) >= A && digit(i) <= B ) {
            res += i;
        }
    }
    cout << res << endl;
}