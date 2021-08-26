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
    ll n;
    cin>>n;
    vl a(n);
    in(n,a);

    vector< pair <ll,ll> > P;
     for(auto i=0;i<n;i++){
     P.push_back( make_pair(a[i],i) );
     }
     sort(P.rbegin(),P.rend());
     for(auto i=0;i<n;i++){
         cout<<P[i].first<<" "<<P[i].second<<endl;
     }
    set<ll, greater<ll> > ans;
     for(auto i=0;i<n-1;i++){
         ll a=-1;ll b=-1;
         for(auto j=i+1;j<n;j++){
             if(P[i].second>P[j].second){
                 if(a==-1 && P[i].first!=P[j].first)
                 {a=j;}
                 else if(a!=-1 && b==-1 && P[j].first!=P[a].first && j<a)
                 b=j;
             }
             if(b!=-1){
                 
                 ans.insert((P[i].first+P[a].first+P[b].first));
             }
         }
     }
   //set<int, greater<int> >::iterator itr;
   for(auto itr=ans.begin();itr!=ans.end();itr++)
     cout<<*itr<<" "<<endl;
     }

int main(){
    fastio;
    compute();
}