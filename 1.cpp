#include <bits/stdc++.h>
using namespace std;
int solve2(){
  int n;
  cin >> n;
  long long  sum = 0;
  for(int i = 0; i < n; i++){
    long long x;
    cin >> x;
    sum += x;
  }
  cout << abs(sum) << endl;
  return 0;

}

int main()
{

  vector<int> ans;
  long long t;
  cin >> t;
  while (t--)
  {
    solve2();
  }

  return 0;
}