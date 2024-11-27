#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

void generateSubarraySums(vector<ll> &arr, vector<ll> &result)
{
  int n = arr.size();
  int totalSubsets = 1 << n; // 2^n個の部分集合
  for (int mask = 0; mask < totalSubsets; mask++)
  {
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
      if (mask & (1 << i))
      {
        sum += arr[i];
      }
    }
    result.push_back(sum);
  }
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  // 配列を二分割
  vector<ll> firstHalf(A.begin(), A.begin() + N / 2);
  vector<ll> secondHalf(A.begin() + N / 2, A.end());

  vector<ll> firstHalfSums, secondHalfSums;
  generateSubarraySums(firstHalf, firstHalfSums);
  generateSubarraySums(secondHalf, secondHalfSums);

  // secondHalfSumsをソート
  sort(secondHalfSums.begin(), secondHalfSums.end());

  string ans = "No";
  for (ll sum : firstHalfSums)
  {
    if (binary_search(secondHalfSums.begin(), secondHalfSums.end(), K - sum))
    {
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
