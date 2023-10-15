#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (i != 0)
    {
      if (A[0] != A[i])
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}