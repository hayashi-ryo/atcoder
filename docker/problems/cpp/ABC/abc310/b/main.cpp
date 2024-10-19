#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;

  vector<pair<int, vector<int>>> product(N);
  for (int i = 0; i < N; i++)
  {
    int price, featureCnt;
    cin >> price >> featureCnt;
    vector<int> feature(featureCnt);
    for (int j = 0; j < featureCnt; j++)
    {
      cin >> feature[j];
    }
    product[i].first = price;
    product[i].second = feature;
  }

  for (int i = 0; i < N - 1; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      if (includes(
              product[j].second.begin(),
              product[j].second.end(),
              product[i].second.begin(),
              product[i].second.end()) &&
          product[i].first >= product[j].first)
      {
        if (product[i].first > product[j].first) // i より jの方が安い場合
        {
          cout << "Yes" << endl;
          return 0;
        }
        if (product[i].second.size() < product[j].second.size()) // i より jの方が機能が多い場合
        {
          cout << "Yes" << endl;
          return 0;
        }
      }

      if (includes(
              product[i].second.begin(),
              product[i].second.end(),
              product[j].second.begin(),
              product[j].second.end()) &&
          product[j].first >= product[i].first)
      {
        if (product[j].first > product[i].first) // i より jの方が安い場合
        {
          cout << "Yes" << endl;
          return 0;
        }
        if (product[j].second.size() < product[i].second.size()) // i より jの方が機能が多い場合
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}