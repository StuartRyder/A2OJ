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
    ll m,n;
    cin>>n>>m;
    char a[n+2][m+2]={'.'};
    for(auto i=1;i<=n;i++){
        for(auto j=1;j<=m;j++)
        cin>>a[i][j];
    }
    ll ans=0;
    for(auto i=1;i<=n;i++){
        for(auto j=1;j<=m;j++){
            if(a[i][j]=='P'){
                if(a[i+1][j]=='W'){
                    a[i][j]='.';
                    a[i+1][j]='.';
                    ans++;
                }
                else if(a[i][j+1]=='W'){
                    a[i][j]='.';
                    a[i][j+1]='.';
                    ans++;
                }
                else if(a[i-1][j]=='W'){
                    a[i][j]='.';
                    a[i-1][j]='.';
                    ans++;
                }
                else if(a[i][j-1]=='W'){
                    a[i][j]='.';
                    a[i][j-1]='.';
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastio;
    compute();
}