#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M), C;
  set<int> setA;
  rep(i, N)
  {
    cin >> A[i];
    setA.insert(A[i]);
    C.push_back(A[i]);
  }

  rep(i, M)
  {
    cin >> B[i];
    C.push_back(B[i]);
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  sort(C.begin(), C.end());
  string ans = "No";

  for (int i = 0; i < (int)C.size(); i++)
  {
    if (setA.count(C[i]) && setA.count(C[i - 1]))
    {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}