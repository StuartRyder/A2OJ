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
    map<ll,ll> b;
    for(auto i=0;i<n;i++){
            if(b.find(a[i])==b.end())
            b[a[i]]=1;
            else
            b[a[i]]++;     
        }
        map<ll, ll>::iterator itr;
        itr = b.begin();
        ll max=itr->first;
        //itr = b.rbegin();
        max=b.rbegin()->first-max;
        ll ans=0;
        for(itr = b.begin(); itr!=b.end();itr++){
            if(b.find((itr->first)+max)!=b.end() && b.find((itr->first)+max)!=itr){
                ans=ans+(itr->second)*(b.find((itr->first)+max)->second);
            }
        }
        if(max==0){
            for(itr=b.begin();itr!=b.end();itr++){
                ans+=((itr->second)*(itr->second -1))/2;
            }
        }
        cout<<max<<" "<<ans<<endl;
}
int main(){
    fastio;
    compute();
}