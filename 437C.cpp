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
#define   REP(i,n)        for(auto i=0;i<n;i++)
#define   FOR(i,a,b)      for(auto i=a;i<=b;i++)
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
    ll n,m;
    cin>>n>>m;
    vl a(n);
    in(n,a);
    ll b[n][n]={0};

    for(auto  i=0;i<n;i++){
    for(auto j=0;j<n;j++)
    b[i][j]=0;}

    REP(i,m){
        int q,w;
        cin>>q>>w;
        b[q-1][w-1]++;
    }
    ll ans=0;
    for(auto i=0;i<n;i++){
        for(auto j=0;j<n;j++){
            if(b[i][j]>0){
                ll t=min(a[i],a[j]);
                ans+=b[i][j]*t;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastio;
    compute();
}