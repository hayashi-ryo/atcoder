#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> junretsu(N);
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    junretsu[i] = a;
  }
  vector<int> sorted_junretsu = junretsu;
  sort(sorted_junretsu.begin(), sorted_junretsu.end());
  int i = 1;
  while (1)
  {
    vector<int> prejunretsu = sorted_junretsu;
    next_permutation(sorted_junretsu.begin(), sorted_junretsu.end());
    if (equal(sorted_junretsu.begin(), sorted_junretsu.end(), junretsu.begin(), junretsu.end()))
    {
      sorted_junretsu = prejunretsu;
      break;
    }
    i++;
  }
  for (int i = 0; i < N - 1; i++)
  {
    cout << sorted_junretsu[i] << " ";
  }
  cout << sorted_junretsu.back() << endl;
}