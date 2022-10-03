#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll M = 1000000007;
ll mod(ll x) {return ((x%M + M)%M);}
ll add(ll a, ll b) {return (mod(mod(a)+mod(b)));}
ll mul(ll a, ll b) {return (mod(mod(a)*mod(b)));}
#define FBO find_by_order
#define OOK order_of_key
#define PI acos(-1.0)
#define F first
#define S second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) (a).begin(),(a).end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define point(a) fixed<<setprecision(a)
#define get(a) for(auto &x:a) cin>>x
#define print(a) for(auto x:a) cout<<x<<" "; cout<<endl
#define see(x) cout<<#x<<" = "<<x<<endl
#define uniq(a) sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define tc int test; cin>>test; while(test--)
#define endl '\n'
 
int main()
{
    fast;
 
    tc
    {
        ll n; cin>>n;
 
        ll a[n]; get(a);
 
        ll mov=(n/2);
 
        if(n%2!=0) mov++;
 
        ll now=mov;
 
        ll even=0, odd=0;
 
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
 
        ll f=0;
 
        while(1)
        {
            if(now < 0)
            {
                cout<<"Bob";
 
                cout<<endl;
 
                f=1;
            }
 
            if(f==1) break;
 
            ll val1=now+now-1;
 
            ll val2=mov-now+mov-now;
 
            if(even>=val1 && odd>=val2)
            {
                cout<<"Alice";
 
                cout<<endl;
 
                f=1;
            }
 
            if(f==1) break;
 
            val1=now+now;
 
            val2=mov-now+mov-now-1;
 
            if(even>=val1 && odd>=val2)
            {
                cout<<"Alice";
 
                cout<<endl;
 
                f=1;
            }
 
            if(f==1) break;
 
            now=now-2;
        }
    }
}
