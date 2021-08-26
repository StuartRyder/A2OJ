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
    ll l=-1;
    ll r=-1;
    vl b;
    b.assign(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(auto i=0;i<n;i++){
        if(b[i]!=a[i])
        {
            l=i;break;
        }
    }
    ll c1=0;
    for(auto i=n-1;i>=0;i--){
        if(b[i]!=a[i])
        {
            r=i;
            c1++;
            break;
        }
    }
    if(c1==0){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;return;
    }
    vl c;
    for(auto i=l;i<=r;i++)
    c.push_back(a[i]);
    reverse(c.begin(),c.end());
    for(auto i=l;i<=r;i++){
        if(c[i-l]!=b[i]){
            cout<<"no"<<endl;
            // out(n,b);
            // out(c.size(),c);
            return;
        }
    }
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
}
int main(){
    fastio;
    compute();
}