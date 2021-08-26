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
    vl d(a);
    b.assign(a.begin(),a.end());
    vl c(a);
    for(auto i=1;i<n;i++){
        b[i]+=b[i-1];
    }
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    for(auto i=1;i<n;i++){
        c[i]+=c[i-1];
    }
    //out(n,b);out(n,c);out(n,d);
    ll m,type,l,r;
    cin>>m;
    while(m--){
        cin>>type>>l>>r;
        if(type==1){
            cout<<b[r-1]-b[l-1]+a[l-1]<<endl;}
            else
            cout<<c[r-1]-c[l-1]+d[l-1]<<endl;
    }

}
int main(){
    fastio;
    compute();
}
