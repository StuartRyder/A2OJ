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
    ll n,m;
    cin>>n>>m;
    vl a(m);
    in(m,a);
    vl b;
    b.assign(a.begin(),a.end());
    ll max=0;
    ll min=0;
    for(auto j=1;j<=n;j++){
        ll t=-1;
        ll k=-1;
        ll z=1001;
        ll p=-1;
        for(auto i=0;i<m;i++){
            if(a[i]>t){
                t=a[i];
                k=i;
            }
            if(b[i]<z && b[i]>0){
                z=b[i];
                p=i;
            }
        }
        min+=z;
        --b[p];
        max+=t;
        --a[k];
    }
    cout<<max<<" "<<min<<endl;

}