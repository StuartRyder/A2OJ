#include<bits/stdc++.h>
#include<iostream>
#include <iterator>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <map>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <limits.h>
#include <random>
using namespace std;
#define ONLINE_JUDGE            freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define   pb              push_back
#define   REP(i,n)        for(int i=0;i<n;i++)
#define   FOR(i,a,b)      for(int i=a;i<=b;i++)
#define   all(v)          v.begin(),v.end()
#define   F               first
#define   S               second
#define   vl              vector<ll>
#define   vi              vector<int>
#define   itr(a)          ::iterator a
#define   lb              lower_bound
#define   ub              upper_bound
#define   ULL             unsigned long long
#define   ret             return 
#define   ll              long long int
#define   in(n,arr)       for(auto i=0 ; i<n ; i++) cin>>arr[i]
#define   out(n,arr)      for(auto i=0 ; i<n ; i++) cout<<arr[i]<<" "; cout<<endl
#define   fastio                    ios::sync_with_stdio(false);cin.tie(0);
/* Created By Stuart Ryder aka Anurag Srivastava*/
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f

ll gcd(ll x,ll y){
return y?gcd(y,x%y):x;
}
static bool coprime(ll u, ll v)
{
    if (((u | v) & 1) == 0) return false;

    while ((u & 1) == 0) u >>= 1;
    if (u == 1) return true;

    do
    {
        while ((v & 1) == 0) v >>= 1;
        if (v == 1) return true;

        if (u > v) { ll t = v; v = u; u = t; }
        v -= u;
    } while (v != 0);

    return false;
}
void compute(){
    int n;
    cin>>n;
    ll a[n];
    in(n,a);
    ll ans=0;
    //sort(a, a + n, greater<ll>());
    // sort(a, a + n);
    // out(n,a);

    for(auto i=0;i<n-1;i++){
        for(auto j=i+1;j<n;j++){
            if(gcd(a[i],2*a[j])>1 || gcd(a[j],2*a[i])>1)
                ans++;
        }
    }
    
    // for(auto i=0;i<n-1;i++){
    //     for(auto j=i+1;j<n;j++){
    //         // ll c=0;
    //         // if(gcd(a[i],a[j])>1 || gcd(a[j],a[i])>1){
    //         //     //ans++;
    //         //     if(a[i]<a[j]){
    //         //         ll temp=a[i];
    //         //         a[i]=a[j];
    //         //         a[j]=temp;
    //         //     }
    //         // }
    //         // c=gcd(a[i],2*a[j]);
    //         // //cout<<c<<" c"<<i<<" i"<<j<<" j"<<endl;
    //         // if(c>1 )
    //         if((!coprime(a[i],2*a[j])) )
    //         ans++;
    //     }
    // }
    
    //out(n,a);
    cout<<ans<<endl;
}


int main(){
    fastio;
    // #ifndef LOCAL
	// freopen("input.txt","r",stdin);
	// #endif
  	
    int t;
    cin>>t;
    while(t--){
        compute();
    }
}