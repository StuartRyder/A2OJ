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

int main(){
ll n , t=1;
cin>>n;
cin>>t;
ll k;
cin>>k;
 ll l=1, r=n;
ll mid=(l+r)/2;
    while (l<=r){
       ll mid=(l+r)/2;
        cout<< "? "<<l<<" "<< mid << endl;
        ll x;
        cin>>x;
        ll nozeros=(mid-l+1)-x;
          if(nozeros>=k){
           if(l==r && k==1){
            cout<<"! "<<l<<endl;
            break;
        }
        r=mid;
        continue;
    }
    else{
        k = k-nozeros;
        l=mid+1;
    }

    }

 }
