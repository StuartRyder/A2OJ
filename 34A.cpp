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
    if(n==2){
        ll x,y;
        cin>>x>>y;
        cout<<1<<" "<<2<<endl;
    }
    else
    {
        vl a(n+1);
        cin>>a[0];
        a[n]=a[0];
        ll min=INT64_MAX;
        for(auto i=1;i<n;i++)
        cin>>a[i];
        ll c,b;
        //out(n+1,a);
        for(auto i=0;i<n;i++){
            if(abs(a[i+1]-a[i])<min){
                min=abs(a[i+1]-a[i]);
                b=i+1;
                c=i+1+1;
            }
        }
        if(c==n+1)
        c=1;
        cout<<b<<" "<<c<<endl;
    } 
}