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
    ll x1,x2,y1,y2,z1,z2;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    ll ans=abs(y1-x1)+abs(y2-x2);
    if(x1==y1 && z1==y1 ){
        if((z2>x2 && z2<y2) || (z2<x2 && z2>y2))
        ans=ans+2;
    }
    if(x2==y2 && z2==y2){
        if((z1<y1 && z1>x1)|| (z1<x1 && z1>y1))
        ans=ans+2;
    }
    cout<<ans<<endl;
}
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--){
        compute();
    }   
}