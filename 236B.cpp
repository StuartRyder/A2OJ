
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
//#define   F               first
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
#define   F(I,B,E,P)        for(int I=B;I<=E;I+=P)
/* Created By Stuart Ryder aka Anurag Srivastava*/
int main(){
    fastio;
int a,b,c,d[1000001]={0},s=0;
F(i,1,1000000,1)
F(j,i,1000000,i)
++d[j];

cin>>a>>b>>c;
F(i,1,a,1)
F(j,1,b,1)
F(k,1,c,1)
s+=d[i*j*k];

cout<<s<<endl;
}