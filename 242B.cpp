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
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
void compute(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> a;
    vector<pair<ll,ll>> b;
    vector<pair<ll,ll>> c;
    for(auto i=0;i<n;i++){
        ll t1,t2;
        cin>>t1>>t2;
        c.push_back(make_pair(t1,t2));
        a.push_back(make_pair(t1,t2));
        b.push_back(make_pair(t1,t2));
    }
    sort(a.begin(),a.end());
    ll t1=a.begin()->first;
    sort(b.begin(), b.end(), sortbysec);
    ll t2=b.rbegin()->second;
    ll t=0;
    for(auto i=c.begin();i!=c.end();i++){
        ++t;
        if(i->second==t2 && i->first==t1){
            break;
        }
    }
    //<<a[t-1].first<<" "<<a[t-1].second
    if(c[t-1].second==t2 && c[t-1].first==t1)
    cout<<t<<endl;
    else
    cout<<-1<<endl; 
}
int main(){
    fastio;
    compute();
}