#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) (a).begin(), (a).end()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * ((b) / gcd(a, b)))
#define point(a) fixed << setprecision(a)
#define uniq(a) \
  sort(all(a)); \
  (a).erase(unique((a).begin(), (a).end()), (a).end())
#define tc     \
  int test;    \
  cin >> test; \
  while (test--)
using namespace std;

int solve(vector<int> &a)
{
  return abs(accumulate(a.begin(), a.end(), 0));
}

int main()
{

  vector<int> ans;
  tc
  {
    ll n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    ans.pb(solve(a));
  }
  for (auto i : ans)
  {
    cout << i << endl;
  }

  return 0;
}