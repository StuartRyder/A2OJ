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
#define   in(n,arr)       for(auto i=0 ; i<n ; i++) cin>>arr[i]
#define   out(n,arr)      for(auto i=0 ; i<n ; i++) cout<<arr[i]<<" "; cout<<endl
#define   fastio                    ios::sync_with_stdio(false);cin.tie(0);
/* Created By Stuart Ryder aka Anurag Srivastava*/
int main(){
    fastio;
    ll n;
    cin>>n;
    vector<pair<ll,ll>> a;
    ll m;
    ll a1=0,b1=0;
    for(auto i=0;i<n;i++){
        ll t;
        cin>>t;
        a.push_back( make_pair (t,i+1) );
    }
        //     REP(i,n){
        //     cout<<a[i].first<<" "<<a[i].second<<endl;
        // }
    cin>>m;
    vl b(m);
    in(m,b);
    sort(a.begin(),a.end());
    for(auto j=0;j<m;j++){
        auto it=lower_bound(a.begin(),a.end(),make_pair(b[j], numeric_limits<ll>::min()));
        ll t=it-a.begin();
        //cout<<t<<endl;
        a1+=a[t].second;
        b1+=1-a[t].second+n;
        }
        // REP(i,n){
        //     cout<<a[i].first<<" "<<a[i].second<<endl;
        // }
    cout<<a1<<" "<<b1<<endl;
}