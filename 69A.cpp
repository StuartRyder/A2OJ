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
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f

int main(){
    fastio;
    ll n;
    cin>>n;
    ll x[n+1]={0};
    ll y[n+1]={0};
    ll z[n+1]={0};
    for(ll i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
        cin>>z[i];
        x[n]=x[n]+x[i];
        y[n]=y[n]+y[i];
        z[n]=z[n]+z[i];
    }
    //cout<<x[n]<<" "<<y[n]<<" "<<z[n]<<endl;
    if(x[n]==0 && y[n]==0 && z[n]==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}