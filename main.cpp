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
        ll b[n]; get(b);
 
        if(n==1)
        {
            cout<<b[0]<<endl; continue;
        }
 
        //print(a); print(b);
 
        vector<ll>v0, v1;
 
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0) v0.pb(b[i]);
            else v1.pb(b[i]);
        }
 
        //print(v0); print(v1);
        sort(all(v0));
        sort(all(v1));
        reverse(all(v0));
        reverse(all(v1));
 
        if(v0.size()==v1.size())
        {
            ll ans=0;
 
            if(v0.back()<=v1.back())
            {
                ans+=v0.back();
                for(auto i:v0) ans+=(2*i);
                for(auto i:v1) ans+=(2*i);
                ans-=(2*v0.back());
            }
 
            else
            {
                ans+=v1.back();
                for(auto i:v0) ans+=(2*i);
                for(auto i:v1) ans+=(2*i);
                ans-=(2*v1.back());
            }
 
            cout<<ans<<endl;
        }
        else if(v0.size()<v1.size())
        {
            //print(v0);
            //print(v1);
            ll ans=v1.back();
            for(auto i:v0) ans+=(2*i); //see(ans);
            ll p=v0.size();
            for(ll i=0;i<p;i++) ans+=(2*v1[i]);
            for(ll i=p;i<=v1.size()-2;i++) ans+=(v1[i]);
 
            cout<<ans<<endl;
        }
        else
        {
            ll ans=v0.back();
            for(auto i:v1) ans+=(2*i);
            ll p=v1.size();
            for(ll i=0;i<p;i++) ans+=(2*v0[i]);
            for(ll i=p;i<=v0.size()-2;i++) ans+=(v0[i]);
 
            cout<<ans<<endl;
        }
    }
}
 