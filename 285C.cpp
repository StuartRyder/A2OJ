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
    ll n;
    cin>>n;
    vl a(n);
    in(n,a);
    vl b;
    for(auto i=0;i<n;i++){
        if(a[i]!=i+1)
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    ll t=b.size();
    if(t!=n){
        ll k=0;
        for(auto i=0;i<n;i++){
            if(a[i]!=i+1){
                a[i]=b[k];
                k++;
            }
        }
    }
    else{
        a=b;
    }
    ll c=0;
    for(auto i=0;i<n;i++){
        c+=abs(i+1-a[i]);
    }
    cout<<c<<endl;
}
int main(){
    fastio;
    compute();
}