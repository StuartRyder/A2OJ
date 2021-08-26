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

void compute(){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl; return;
    }
    // if(gcd(a,b)==1 && (a!=1)&& (b!=1))
    // {
    //     cout<<-1<<endl;return;
    // }
    ll k=gcd(a,b);
    a=a/k;
    b=b/k;
    bool flag=false;
    ll c=0;
    while(!flag && b!=1){
        if(b%2==0){
            b=b/2;c++;
        }
        else if(b%3==0){
            b=b/3;c++;
        }
        else if(b%5==0){
            b=b/5;c++;
        }
        else
        flag=true;
    }
    if(flag == true){
        cout<<-1<<endl;return;
    }
    else{
        while(!flag && a!=1){
        if(a%2==0){
            a=a/2;c++;
        }
        else if(a%3==0){
            a=a/3;c++;
        }
        else if(a%5==0){
            a=a/5;c++;
        }
        else
        flag=true;
    }
    if(flag == true){
        cout<<-1<<endl;return;
    }
    else
    cout<<c<<endl;
    return;
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