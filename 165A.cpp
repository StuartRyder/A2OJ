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
    ll k=0;
    ll a[n][2];
    for(auto i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
    }
    for(auto i=0;i<n;i++){
        ll t1=0;
        ll t2=0;
        ll t3=0;
        ll t4=0;
        for(auto j=0;j<n;j++){
            if((a[j][0]>a[i][0] && a[j][1]==a[i][1]))
            {
                t1++;
            }
            if((a[j][0]<a[i][0] && a[j][1]==a[i][1]))
            {
                t2++;
            }
            if((a[j][0]==a[i][0] && a[j][1]>a[i][1]))
            {
                t3++;
            }
            if((a[j][0]==a[i][0] && a[j][1]<a[i][1]))
            {
                t4++;
            }
        }
        if(t1>0 && t2>0 && t3>0 && t4>0)
        k++;
    }
    cout<<k<<endl;
}
