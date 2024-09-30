#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  ll K;
  cin >> N >> M >> K;
  vector<ll> A(N);
  ll votesCount = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    votesCount += A[i];
  }
  vector<ll> sortA = A;
  sort(sortA.begin(), sortA.end());
  vector<ll> ans(N, -1);
  ll remainingVotesCount = K - votesCount;

  for (int i = 0; i < N; i++)
  {
    /*
    ll currentVotes = A[i];
    ll requireVotes = sortA[M - 1] - currentVotes;

    if(currentVotes )
    */
  }
  cout << sortA[M - 1] << " " << sortA[M] << endl;

  return 0;
}