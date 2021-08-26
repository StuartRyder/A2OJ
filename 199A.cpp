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
ll previousFibonacci(ll n){
    double a = n / ((1 + sqrt(5)) / 2.0);
    return round(a);
}
int main(){
    fastio;
    ll n;
    cin>>n;
    if(n==0)cout<<"0 0 0"<<endl;
    if(n==1)cout<<"1 0 0 "<<endl;
    if(n==2)cout<<"1 1 0"<<endl;
    if(n==3)cout<<"1 1 1"<<endl;
    if(n>3){
    ll a1=previousFibonacci(n);
    ll a2=previousFibonacci(previousFibonacci(a1));
    ll a3=previousFibonacci(a2);
    cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
}