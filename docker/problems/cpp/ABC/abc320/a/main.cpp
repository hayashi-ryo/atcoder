#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int A, B;

int main()
{
  cin >> A >> B;
  cout << int(pow(A, B) + pow(B, A)) << endl;
}
