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
#define   FOR(i,a,b)      for(int i=a;i<b;i++)
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
    int n;
    cin>>n;
    vl a(n);
     in(n,a);
     ll ans=0;
     ll max=INT64_MIN;
     ll min=INT64_MAX;
     ll m1=-1;
     ll m=-1;
     for(auto i=0;i<n;i++){
         if(a[i]>max){
             max=a[i];
             m=i;
         }
         if(a[i]<=min){
             min=a[i];
             m1=i;
         }
     }
     if(m1>m)
     ans=m+n-m1-1;
     else
     ans=m+n-m1-2;
     
     cout<<ans<<endl;
}