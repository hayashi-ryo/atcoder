#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool checkBuy(int mid, const vector<int> &a, const vector<int> &b)
{
  int seller = upper_bound(a.begin(), a.end(), mid) - a.begin();
  int buyer = (int)b.size() - (lower_bound(b.begin(), b.end(), mid) - b.begin());
  return seller >= buyer;
}
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  int l = 0, r = 1000000001;

  while (abs(r - l) > 1)
  {
    int mid = (l + r) / 2;
    if (checkBuy(mid, A, B))
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
  }
  cout << r << endl;
  return 0;
}