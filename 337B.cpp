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
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}
 
ll lcm(ll a,ll b)
{ return (a*b)/__gcd(a,b); }
void compute(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=(double)a/(double)b;
    double y=(double)c/(double)d;
    //cout<<x<<" "<<y<<endl;
    if(x<y){
        ll a1=b*c-a*d;
        ll b1=b*c;
        ll t=gcd(a1,b1);
        cout<<a1/t<<"/"<<b1/t<<endl;
    }
    else if(x>y){
        ll a1=a*d-b*c;
        ll b1=a*d;
        ll t=gcd(a1,b1);
        cout<<a1/t<<"/"<<b1/t<<endl;
    }
    else{
        cout<<0<<"/"<<1<<endl;
    }
}
int main(){
    fastio;
    ll t=1;
    //cin>>t;
    while(t--){
        compute();
    }
}