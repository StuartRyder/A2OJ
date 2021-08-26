#include<bits/stdc++.h>
#include<iostream>
#include <iterator>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
#include <limits.h>
#include <random>
using namespace std;
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
    int  n;
    cin>>n;
    vl a(n);
    in(n,a);
    vl a1;
    vl a2;
    vl a3;
    for(auto i=0;i<n;i++){
        if(a[i]==0)
        a3.push_back(a[i]);
        if(a[i]<0)
        a1.push_back(a[i]);
        if(a[i]>0)
        a2.push_back(a[i]);
    }
    int x=a3.size();
    int y=a1.size();
    int z=a2.size();
    if(z==0){
        int q=a1[y-1];
        int w=a1[y-2];
        a1.pop_back();
        a1.pop_back();
        a2.push_back(q);
        a2.push_back(w);
        y-=2;
        z+=2;
    }
    if(y%2==0){
        int q=a1[y-1];
        y-=1;
        a3.push_back(q);
        a1.pop_back();
        x+=1;
    }
    cout<<y<<" ";
    out(y,a1);
    cout<<z<<" ";
    out(z,a2);
    cout<<x<<" ";
    out(x,a3);

}