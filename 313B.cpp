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
void compute(){
    string s;
    cin>>s;
    ll m;
    cin>>m;
    ll a[s.size()+1]={0};
    for(auto i=1;i<=s.size()-1;i++){
        if(s[i-1]==s[i]){a[i]=1;}
        else{a[i]=0;}
    }
     ll ans[s.size()+1]={0};
     for(auto i=1;i<=s.size();i++)
     {
         if(a[i]==1)ans[i]=ans[i-1]+1;
         else ans[i]=ans[i-1];
     }
    //  out(s.size(),a);
    //  out(s.size(),ans);
    //out(s.size()+1,ans);
    while(m--){
        ll l,r;
        cin>>l>>r;
        cout<<ans[r-1]-ans[l-1]<<endl;
    }
}
int main(){
    fastio;
    compute();
}