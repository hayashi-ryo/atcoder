#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), B(N - 1);
  rep(i, N) cin >> A[i];
  rep(i, N - 1) cin >> B[i];

  sort(A.rbegin(), A.rend());
  sort(B.rbegin(), B.rend());

  int Bi = 0, notStoreCnt = 0, notStoreAi;

  for (int i = 0; i < N; i++)
  {
    if (A[i] > B[Bi]) // Aiが収納できない場合
    {
      notStoreCnt++;
      notStoreAi = i;
    }
    else
    {
      Bi++;
    }
  }

  if (notStoreCnt > 1)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << A[notStoreAi] << endl;
  }
  return 0;
}