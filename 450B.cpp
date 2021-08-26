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
#define   MOD            1000000007
/* Created By Stuart Ryder aka Anurag Srivastava*/
int main(){
    fastio;
    ll x,y,n,t;
    ll a[6];
    cin>>x>>y>>n;
    a[0]=x;
    a[1]=y;
    ll i=2;
    while(i!=6){
        a[i]=a[i-1]-a[i-2];
        i++;
    }
    
    switch(n%6){
        case 1:t=0;break;
        case 2:t=1;break;
        case 3:t=2;break;
        case 4:t=3;break;
        case 5:t=4;break;
        case 0:t=5;break;
    }
    //cout<<a[t]<<endl;
    if(a[t]<0)
    {
        while(a[t]<0)
        a[t]+=MOD;
    cout<<a[t]%MOD<<endl;
    }
    else
    cout<<a[t]%MOD<<endl;
}