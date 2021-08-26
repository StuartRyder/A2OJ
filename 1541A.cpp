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
void compute(){
    ll n;
    cin>>n;
    ll a[n];
    ll a1[n];
    for(auto i=0;i<n;i++)
    a[i]=i+1;
    if(n%2!=0){
        if(n>=5){
            for(auto i=0;i<n-3;i=i+2){
            a1[i]=a[i+1];
            a1[i+1]=a[i]; 
        }
        a1[n-3]=a[n-1];
        a1[n-2]=a[n-3];
        a1[n-1]=a[n-2];
        }
        else
        {
        a1[0]=a[n-1];
    for(auto i=0;i<n-1;i++){
        a1[i+1]=a[i];
        }  
    }
    }
    else
    {
        for(auto i=0;i<n;i=i+2){
            a1[i]=a[i+1];
            a1[i+1]=a[i];
        }
    }
    
    out(n,a1);
}
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--){
        compute();
    }
}