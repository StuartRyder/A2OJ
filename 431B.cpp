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
    ll a[5][5]={0};
    for(auto i=0;i<5;i++){
        for(auto j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    ll b[5]={1,2,3,4,5};
    ll sum=0;
    ll ans=a[b[0]-1][b[1]-1]+a[b[1]-1][b[0]-1]+(2*a[b[2]-1][b[3]-1])+(2*a[b[3]-1][b[2]-1])+a[b[1]-1][b[2]-1]+a[b[2]-1][b[1]-1]+(2*a[b[3]-1][b[4]-1])+(2*a[b[4]-1][b[3]-1]);
    while(next_permutation(b, b + 5)){
        sum=a[b[0]-1][b[1]-1]+a[b[1]-1][b[0]-1]+(2*a[b[2]-1][b[3]-1])+(2*a[b[3]-1][b[2]-1])+a[b[1]-1][b[2]-1]+a[b[2]-1][b[1]-1]+(2*a[b[3]-1][b[4]-1])+(2*a[b[4]-1][b[3]-1]);
        if(sum>ans)
        ans=sum;
        // out(5,b);
        // cout<<endl;
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
int main(){
    fastio;
    compute();
}