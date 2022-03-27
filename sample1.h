#pragma once

#include <vector>
#include <iostream>

using namespace std;

class AllSearch
{
public:
  void EasySearch();
  void SatisfyW();

private:
};

void AllSearch::EasySearch()
{
  int min = 100000000;
  int N, K;

  cin >> N >> K;

  vector<int> a(N, 0);
  vector<int> b(N, 0);

  for (int i = 0; i < N; i++)
  {
    cin >> a[i] >> b[i];
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      int sum = a[i] + b[j];
      if (sum >= K && sum < min)
      {
        min = sum;
      }
    }
  }

  cout << min << endl;
}
