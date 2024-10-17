#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool can_make(int N, const vector<ll> &Q, const vector<ll> &A, const vector<ll> &B, ll total_people)
{
  ll min_A = 0, max_B = total_people;

  for (int i = 0; i < N; i++)
  {
    ll required_A = A[i] * min_A;
    ll remaining_material = Q[i] - required_A;
    if (remaining_material < 0)
      return false;
    ll max_B_for_this = remaining_material / B[i];
    max_B = min(max_B, max_B_for_this);
  }

  return min_A + max_B >= total_people;
}

int main()
{
  int N;
  cin >> N;
  vector<ll> Q(N), A(N), B(N);
  rep(i, N) cin >> Q[i];
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];

  ll low = 0, high = 1'000'000'000;

  while (low < high)
  {
    ll mid = (low + high) / 2;
    if (can_make(N, Q, A, B, mid))
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  cout << low << endl;
  return 0;
}