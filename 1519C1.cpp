#include<bits/stdc++.h>
using namespace std;
 
#define ONLINE_JUDGE            freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastio                    ios::sync_with_stdio(false);cin.tie(0);
#define ll                      long long
#define pii                     pair<int, int>
#define pli                     pair<ll, int>
#define pil                     pair<int, ll>
#define pll                     pair<ll, ll>
#define vi                      vector<int>
#define vll                     vector<ll>
#define vb                      vector<bool>
#define vd                      vector<double>
#define vs                      vector<string>
#define ff                      first
#define ss                      second
#define pb                      push_back
#define eb                      emplace_back
#define ppb                     pop_back
#define pf                      push_front
#define ppf                     pop_front
#define vpii                    vector<pii>
#define vpll                    vector<pll>
#define umap                    unordered_map
#define all(x)                  x.begin(),x.end()
#define clr(a,b)                memset(a,b,sizeof a)
#define fr(i, n)                for(ll i=0; i<n;++i)
#define fr1(i, n)               for(ll i=1; i<=n; ++i)
#define rfr(i, n)               for(ll i=n-1; i>=0; --i)
#define frc(i,a,b)		        for(ll i=a;i<b;i++)
#define precise(x)              cout<<fixed<<setprecision(x)
#define wh                      while
#define mp                      make_pair
#define le                      length()
#define endl                    "\n"
#define sf                      scanf    
#define pq                      priority_queue                
#define RemoveDuplicates(a)     a.resize(unique(all(a))-a.begin())
#define pr(x) 				    cerr<<"["<<#x<<": "<<x<<"] "
#define pr2(x,y) 				cerr<<"["<<#x<<" "<<#y<<": "<<x<<" "<<y<<"] "
#define PI 						3.14159265 

// for ( 1/(a^n) ) %m  [ MODULAR INVERSE ]
// modpow(modpow(a,n,mod),mod-2,mod)%mod)

 
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}
 
ll lcm(ll a,ll b)
{ return (a*b)/__gcd(a,b); }
 
 
ll modpow(ll x, ll y, ll p)  
{  
    ll res = 1;    
 
    x = x % p;
   
    if (x == 0) return 0;
 
    while (y > 0)  
    {  
       
        if (y & 1)  
            res = (res*x) % p;  
 
       
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
bool inside(ll x,ll y,ll n,ll m)
{
    return(x>=0&&x<n&&y>=0&&y<m);
}  
 
ll modfact(ll n, ll p)
{
    if (n >= p)
        return 0;
 
    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}
 
long long power(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = power(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
 
///////////// TEMPLATE END ///////////////////////////////////////////////////
/* Created By Stuart Ryder aka Anurag Srivastava*/

const int N = 2e5+1;

void solve()
{
	ll n;
	cin>>n;
	
	map<ll,vll> m;
	
	vll u(n),s(n);
	
	fr(i,n)
	{
		cin>>u[i];
	}
	
	ll sum=0;
	
	fr(i,n) cin>>s[i];
	
	
	fr(i,n) sum+=s[i];
	
	fr(i,n)
	{
		m[u[i]].pb(s[i]);
	}
	
	
	map<ll,vll> ::iterator it;
	for(it = m.begin();it!=m.end();++it)
	{
		sort(all(it->ss));
	}
	
	map<ll,vll> pre;

	
	for(auto u:m)
	{
		ll t=0;
		
		for(auto v:u.ss)
		{
			t+=v;
			pre[u.ff].pb(t);
//			pr(t)<<" ";
		}	
//		cout<<endl;	
	}
	
	vll ans(N,0);
	

		
		for(auto u:m)
		{
			ll s= u.ss.size();
			
			fr1(i,min(n,s))
			{
				
				ll m = s%i;
			
				ans[i]+= pre[u.ff][s-1];
				if(m!=0)
				{
					ans[i] -=  pre[u.ff][m-1];
				}
			}
			
		}
		
		fr1(i,n)
		cout<<ans[i]<<" ";


	cout<<endl;
	

}

int main()
{
//	#ifndef LOCAL
//		freopen("input.txt","r",stdin);
//	#endif
  	
    fastio
    	
   	
    int t;
    cin>>t;
    
    
    fr1(i,t)
    {
    	
//        cout<<"Case #"<<i<<": ";
	 
		solve();
    }
 
   
    return 0;
}