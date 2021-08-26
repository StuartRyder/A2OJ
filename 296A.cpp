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
    vl a(1001);
    vl b(n);
    for(auto i=0;i<n;i++){
        ll t;
        cin>>t;
        a[t]++;
        b[i]=t;
    }
    sort(a.begin(),a.end());
    if(n%2==0){
        if(a[1000]>n/2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else
    {
        if(a[1000]>(n/2)+1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    
}