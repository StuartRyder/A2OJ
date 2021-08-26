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
    vl a(7);
    in(7,a);
    ll k=n;
    while(k>0){
        k=k-a[0];
        if(k<=0){
            cout<<1<<endl;
            break;
        }
        k=k-a[1];
        if(k<=0){
            cout<<2<<endl;
            break;
        }
        k=k-a[2];
        if(k<=0){
            cout<<3<<endl;
            break;
        }
        k=k-a[3];
        if(k<=0){
            cout<<4<<endl;
            break;
        }
        k=k-a[4];
        if(k<=0){
            cout<<5<<endl;
            break;
        }
        k=k-a[5];
        if(k<=0){
            cout<<6<<endl;
            break;
        }
        k=k-a[6];
        if(k<=0){
            cout<<7<<endl;
            break;
        }
    }
}