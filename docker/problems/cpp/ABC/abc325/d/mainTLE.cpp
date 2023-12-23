#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

struct Product
{
  ll time;     // 商品が範囲に入る時間
  ll duration; // 商品が範囲にとどまる時間
  int printed; // 印字された商品

  bool operator<(const Product &other) const
  {
    return time < other.time;
  }
};
/*
商品への印字条件
コンベア内に商品が存在している。そのうち
1. 出る瞬間
2. 出るまでの時間が短いもの
*/
int main()
{
  int N;
  cin >> N;
  vector<Product> products(N);
  ll maxTime = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> products[i].time >> products[i].duration;
    products[i].printed = 0;
    maxTime = max(products[i].time + products[i].duration, maxTime);
  }

  sort(products.begin(), products.end());
  int printedproducts = 0;
  ll currentTime = 0;
  while (currentTime <= maxTime)
  {
    ll exitTime = 0;
    int printProduct = N + 1;
    for (int i = 0; i < products.size(); i++)
    {
      if (currentTime == products[i].time + products[i].duration)
      {
        printProduct = i;
        break;
      }
      else if (currentTime < products[i].time + products[i].duration)
      {
        if (exitTime == 0)
        {
          exitTime = products[i].time + products[i].duration - currentTime;
        }
        if (exitTime < products[i].time + products[i].duration - currentTime)
        {
          exitTime = min(exitTime, products[i].time + products[i].duration - currentTime);
          printProduct = i;
        }
      }
    }
    if (printProduct != N + 1)
    {
      products.erase(products.begin() + printProduct);
      printedproducts++;
    }
    currentTime += products[0].time;
  }
  cout << printedproducts << endl;
}