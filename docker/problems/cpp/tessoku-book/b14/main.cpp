#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

vector<ll> enumerateSubsetSum(const vector<int> &array)
{
  int n = (int)array.size();
  vector<ll> subsetSum;
  for (int bit = 0; bit < (1 << n); bit++)
  {
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
      if (bit & (1 << i))
      {
        sum += array[i];
      }
    }
    subsetSum.push_back(sum);
  }
  return subsetSum;
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> left(A.begin(), A.begin() + N / 2);
  vector<int> right(A.begin() + N / 2, A.end());

  vector<ll> leftSubsetSum = enumerateSubsetSum(left);
  vector<ll> rightSubsetSum = enumerateSubsetSum(right);

  sort(rightSubsetSum.begin(), rightSubsetSum.end());

  string ans = "No";
  for (auto leftSum : leftSubsetSum)
  {
    ll target = K - leftSum;
    if (binary_search(rightSubsetSum.begin(), rightSubsetSum.end(), target))
    {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}