#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    int n, m, k;
    string s, res = "";
    cin >> n >> m >> s;
    map<char, int> mp;
    for(auto x: s) mp[x]++;
    int cnt[26];
    for(int i = 0; i < 26; i++) cnt[i] = 0; 
    for(auto x: mp){
      cnt[x.first - 'a'] = x.second;
    }
    k = m;
    while(k--){
      int flag = 1;
      int j = 0;
      int mx = min(n / m, 26);
      for(int i = 0; i < mx; i++, j++){
          if(cnt[i] == 0){
            flag = 0;
            break;
          }
          cnt[i]--;
        }
        (flag) ? res.push_back('a' + n / m) : res.push_back('a' + j);
    }
    cout << res << endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
     
    solve();
    }
    return 0;
}