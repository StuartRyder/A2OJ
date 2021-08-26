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
#define   in(n,arr)       for(auto i=0 ; i<n ; i++) scanf("%lld", &arr[i])
#define   out(n,arr)      for(auto i=0 ; i<n ; i++) printf("%lld ", arr[i]); printf("\n")
#define   fastio                    ios::sync_with_stdio(false);cin.tie(0);
/* Created By Stuart Ryder aka Anurag Srivastava*/
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f
void compute(){
    ll n;
    scanf("%lld", &n);
    vl a(n);
    in(n,a);
    ll ans=0;
    ll x;
    vector<pair<ll,ll>> a1(n);
    for(auto i=0;i<n;i++){
        a1[i].first=a[i];
        a1[i].second=i+1;
    }
    sort(a1.begin(),a1.end());
    // if(n%2==0)
    // x=n/2;
    // else
    // x=(n/2)+1;
    // for(auto i=0;i<n;i++){
    //     cout<<a1[i].first<<" "<<a1[i].second<<endl;
    // }
    for(auto i=0;i<n;i++){
        ll k=(2*n)/a1[i].first;
        if((2*n)%a1[i].first==0)
        k++;
        for(auto j=0; j<n && a1[j].first<=k;j++){
            if(a1[i].first==a1[j].first)
            continue;
            if(a1[i].first*a1[j].first==a1[i].second+a1[j].second)
            ans++;
        }   
    }
    //cout<<ans<<endl;
    printf("%lld \n", ans/2);
}
int main(){
    fastio;
    ll t;
    scanf("%lld", &t);
    while(t--){
        compute();
    }
}