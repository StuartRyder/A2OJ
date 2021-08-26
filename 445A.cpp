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
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    for(auto i=0;i<n;i++){
        for(auto j=0;j<m;j++)
        cin>>a[i][j];
    }
    char b[n][m];
    for(auto i=0;i<n;i++){
        for(auto j=0;j<m;j++){
            if(a[i][j]=='-')
            b[i][j]='-';
            else
            {
                if((i+j)%2==0)
                b[i][j]='B';
                else
                b[i][j]='W';
            }
        }
    }
    for(auto i=0;i<n;i++){
        for(auto j=0;j<m;j++)
        cout<<b[i][j];
        cout<<endl;
    }
}
int main(){
    fastio;
    compute();
}