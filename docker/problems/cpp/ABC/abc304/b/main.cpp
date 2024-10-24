#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;

  if (N < 1000)
    cout << N << endl;
  else if (pow(10, 3) <= N && N < pow(10, 4))
    cout << N - N % (int)pow(10, 1) << endl;
  else if (pow(10, 4) <= N && N < pow(10, 5))
    cout << N - N % (int)pow(10, 2) << endl;
  else if (pow(10, 5) <= N && N < pow(10, 6))
    cout << N - N % (int)pow(10, 3) << endl;
  else if (pow(10, 6) <= N && N < pow(10, 7))
    cout << N - N % (int)pow(10, 4) << endl;
  else if (pow(10, 7) <= N && N < pow(10, 8))
    cout << N - N % (int)pow(10, 5) << endl;
  else if (pow(10, 8) <= N && N < pow(10, 9))
    cout << N - N % (int)pow(10, 6) << endl;

  return 0;
}