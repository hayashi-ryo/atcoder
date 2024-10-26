#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;
typedef long long ll;

// Function to compute the number of positions on a diagonal
ll count_diagonal_positions(ll N, ll d)
{
  ll i_min = max(1LL, d - N);
  ll i_max = min(N, d - 1);
  ll count = i_max - i_min + 1;
  return max(0LL, count);
}

// Function to compute the number of positions on an anti-diagonal
ll count_anti_diagonal_positions(ll N, ll a)
{
  ll i_min = max(1LL, 1 + a);
  ll i_max = min(N, N + a);
  ll count = i_max - i_min + 1;
  return max(0LL, count);
}

int main()
{
  ll N, M;
  cin >> N >> M;
  vector<ll> R_v, C_v, D_v, A_v;
  set<ll> R, C, D, A;
  set<pair<ll, ll>> occupied;
  for (ll k = 0; k < M; ++k)
  {
    ll i, j;
    cin >> i >> j;
    R.insert(i);
    C.insert(j);
    D.insert(i + j);
    A.insert(i - j);
    occupied.insert({i, j});
  }
  R_v.assign(R.begin(), R.end());
  C_v.assign(C.begin(), C.end());
  D_v.assign(D.begin(), D.end());
  A_v.assign(A.begin(), A.end());

  ll total_positions = N * N;

  // Compute individual counts
  ll A_count = N * R.size();
  ll B_count = N * C.size();
  ll C_count = 0;
  for (ll d : D)
  {
    C_count += count_diagonal_positions(N, d);
  }
  ll D_count = 0;
  for (ll a : A)
  {
    D_count += count_anti_diagonal_positions(N, a);
  }

  // Compute pairwise intersections
  ll AB_count = R.size() * C.size();

  ll AC_count = 0;
  for (ll i : R)
  {
    for (ll d : D)
    {
      ll j = d - i;
      if (1 <= j && j <= N)
      {
        AC_count++;
      }
    }
  }

  ll AD_count = 0;
  for (ll i : R)
  {
    for (ll a : A)
    {
      ll j = i - a;
      if (1 <= j && j <= N)
      {
        AD_count++;
      }
    }
  }

  ll BC_count = 0;
  for (ll j : C)
  {
    for (ll d : D)
    {
      ll i = d - j;
      if (1 <= i && i <= N)
      {
        BC_count++;
      }
    }
  }

  ll BD_count = 0;
  for (ll j : C)
  {
    for (ll a : A)
    {
      ll i = j + a;
      if (1 <= i && i <= N)
      {
        BD_count++;
      }
    }
  }

  ll CD_count = 0;
  for (ll d : D)
  {
    for (ll a : A)
    {
      if ((d + a) % 2 != 0)
        continue;
      ll i = (d + a) / 2;
      ll j = (d - a) / 2;
      if (1 <= i && i <= N && 1 <= j && j <= N)
      {
        CD_count++;
      }
    }
  }

  // Compute three-way intersections
  ll ABC_count = 0;
  for (ll i : R)
  {
    for (ll j : C)
    {
      if (D.count(i + j))
      {
        ABC_count++;
      }
    }
  }

  ll ABD_count = 0;
  for (ll i : R)
  {
    for (ll j : C)
    {
      if (A.count(i - j))
      {
        ABD_count++;
      }
    }
  }

  ll ACD_count = 0;
  for (ll i : R)
  {
    for (ll d : D)
    {
      ll j = d - i;
      if (1 <= j && j <= N && A.count(i - j))
      {
        ACD_count++;
      }
    }
  }

  ll BCD_count = 0;
  for (ll j : C)
  {
    for (ll d : D)
    {
      ll i = d - j;
      if (1 <= i && i <= N && A.count(i - j))
      {
        BCD_count++;
      }
    }
  }

  // Compute four-way intersection
  ll ABCD_count = 0;
  for (ll i : R)
  {
    for (ll j : C)
    {
      if (D.count(i + j) && A.count(i - j))
      {
        ABCD_count++;
      }
    }
  }

  // Apply Inclusion-Exclusion Principle
  ll attacked_positions = A_count + B_count + C_count + D_count - (AB_count + AC_count + AD_count + BC_count + BD_count + CD_count) + (ABC_count + ABD_count + ACD_count + BCD_count) - ABCD_count;

  // The positions occupied by existing pieces are included in attacked_positions
  // We need to ensure that we don't subtract them twice
  // Total safe positions = total_positions - attacked_positions

  ll safe_positions = total_positions - attacked_positions;

  // Ensure safe_positions is non-negative
  safe_positions = max(0LL, safe_positions);

  cout << safe_positions << endl;

  return 0;
}
