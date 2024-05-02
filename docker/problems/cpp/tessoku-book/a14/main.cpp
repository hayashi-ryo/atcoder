#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N), C(N), D(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  rep(i, N) cin >> C[i];
  rep(i, N) cin >> D[i];
  vector<int> AB, CD;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      AB.push_back(A[i] + B[j]);
      CD.push_back(C[i] + D[j]);
    }
  }
  sort(AB.begin(), AB.end());
  sort(CD.begin(), CD.end());
  string ans = "No";
  for (int i = 0; i < CD.size(); i++)
  {
    if (binary_search(CD.begin(), CD.end(), K - AB[i]))
    {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}