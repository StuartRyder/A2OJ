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
ll sum(ll x)
{
    if (x < 0)return -1;
    ll s = 0;
    while(x)
    {
        s += x%10;
        x /= 10;
    }
 
    return s;
}
 ll poww(ll a, ll b)
{
    ll res = 1;
    for(int i = 1; i<=b; ++i)
        res *= a;
 
    return res;
}
void compute(){
    ll a,b,c;
    cin>>a>>b>>c;
    vl ans;
    ll k=0;
    for(auto i=1;i<=81;i++){
        ll x=b*poww(i,a)+c;
        if(sum(x)==i && x<10e8 && x>0){
            k++;
            ans.pb(x);
        }
    } 
    if(k!=0){
        cout<<k<<endl;
    for(auto i=ans.begin();i!=ans.end();i++)
    if(*i>0 && *i<10e8)
    cout<<*i<<" ";
    cout<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
}
int main(){
    fastio;
    compute();
}