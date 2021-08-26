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
    ll a,b,c;
    cin>>a>>b>>c;
    string x,y;
    x="1";
    y="1";
    for(auto i=1;i<(a-c+1);i++){
        x=x+"0";
    }
    for(auto i=1;i<(b-c+1);i++){
        y=y+"1";
    }   
    for(auto i=1;i<=(c-1);i++){
        x=x+"0";
        y=y+"0";
    } 
    cout<<x<<" "<<y<<endl;
}
int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        compute();
    }
}