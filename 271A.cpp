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
    int n;
    cin>>n;
    int ans=0;
    int i=n+1;
    while(true){
    int x1=i%10;
    int x2=(i%100-x1)/10;
    int x3=(i%1000-x2*10-x1)/100;
    int x4=(i%10000-x3*100-x2*10-x1)/1000;
    if(x1 != x2 && x1!=x3 && x1!=x4){
        if(x2!=x3 && x2!=x4){
            if(x3!=x4)
            {
                break;
            }
        }
    }
    i++;
    ans++;
    }
    cout<<i<<endl;
}