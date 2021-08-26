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
#define   pb              push_back
#define   REP(i,n)        for(ll i=0;i<n;i++)
#define   FOR(i,a,b)      for(ll i=a;i<=b;i++)
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
void compute(){
    ll n,k,x;
    cin>>n>>k>>x;
    vl v(n);
    in(n,v);
    ll ans=0;
    vl ans1;
    sort(v.begin(),v.end());
    //out(n,v);
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(auto i=1;i<n;i++){
        if(v[i]-v[i-1]>x){
            ll t=(v[i]-v[i-1])/x;
            if((v[i]-v[i-1])%x==0)
            t--;

            ans1.push_back(t);
            ans++;
            //cout<<ans<<" "<<v[i]<<endl;
        }
    }
    //cout<<ans<<endl;
    sort(ans1.begin(),ans1.end());    int l=ans1.size();
    //out(l,ans1);

    for(auto i=0;i<l;i++){
          //cout<<k<<" "<<ans1[i]<<" "<<ans<<endl;
          if(k>=ans1[i]){
            k=k-ans1[i];
            ans--;

        }
        else{
          break;
        }
    }
    cout<<ans+1<<endl;
}

int main(){
    fastio;
    compute();
}