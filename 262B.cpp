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
    ll n,k;
    cin>>n>>k;
    vl a(n);
    ll min=INT_MAX;
    ll t=-1;
    for(auto i=0;i<n;i++){
        cin>>a[i];
        if(abs(a[i])<min)
        {
            min=abs(a[i]);
            t=i;
        }
    }

    ll i=0;
    for( i=0;i<n && a[i]<0 && k!=0;i++){
            a[i]*=-1;
            k--;
    }
    if(k!=0){
        if(k%2!=0)
        a[t]=-1*a[t];
    }

    ll sum=0;
    for( i=0;i<n;i++){
        sum+=a[i];
    }
    //out(n,a);
    cout<<sum<<endl;
}
int main(){
    fastio;
    compute();
}