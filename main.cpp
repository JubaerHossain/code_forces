#include<bits/stdc++.h>
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
using namespace std;

int main()
{
    fast;
 
    tc
    {
        ll n,k; cin>>n>>k;
 
        ll a[k]; get(a);
 
        if(k==1)
        {
            cout<<"Yes"<<endl; continue;
        }
 
        ll last=a[1]-a[0]; 
 
        ll f=0;
 
        for(int i=2;i<k;i++)
        {
            if(a[i]-a[i-1] < last)
            {
                cout<<"No"<<endl;
 
                f=1;
            }
 
            last=a[i]-a[i-1];
 
            if(f==1) break;
        }
 
        if(f==1) continue;
 
        last=a[1]-a[0]; 
 
        ll m=n-k+1;
        m=m*last;
 
        if(a[0]>m)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
 