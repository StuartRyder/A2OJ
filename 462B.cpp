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
    ll a[26]={0};
    ll n ,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ans=0;
    ll max=0;
    char c=s[0];
    for(auto i=0;i<n;i++)
        a[s[i]-65]++;
    sort(a,a+26,greater<int>());
    int t=0;
    while(k!=0){
        if(a[t]>k){
            ans+=k*k;
            k=0;
        }
        else{
            k-=a[t];
            ans+=a[t]*a[t];
            t++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastio;
    compute();
}