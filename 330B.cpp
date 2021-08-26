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
    ll X[n][n];
    for(auto i=0;i<n;i++) {
        for(auto j=0;j<n;j++) X[i][j]=1;
    }
    ll A[n]={0};
    for(auto i=1;i<=m;i++){
        ll t,z;
        cin>>t>>z;
        X[t-1][z-1]=-1;
        X[z-1][t-1]=-1;
        A[t-1]++;
        A[z-1]++;
    }
    ll ans=A[0],p=0;
    for(auto i=1;i<n;i++){
        if(A[i]<ans){
            ans=A[i];
            p=i;
        }
    }
    ll Q=n-ans-1;
    cout<<Q+ans*Q<<endl;
    //cout<<ans<<" "<<p<<endl;
    vl r;
    for(auto i=0;i<n;i++){
        if(X[p][i]!=-1 && p!=i)
        r.push_back(i+1);
    }
    // out(r.size(),r);
    // out(n,A);
    // for(auto i=0;i<n;i++){
    //     for(auto j=0;j<n;j++)
    //     cout<<X[i][j];
    //     cout<<endl;
    // }
    for(auto i=0;i<r.size();i++){
        cout<<p+1<<" "<<r[i]<<endl;
    }
    for(auto i=0;i<n;i++){
        ll o=X[p][i];
        if(o==-1){
            for(auto i=0;i<r.size();i++){
                cout<<o<<" "<<r[i]<<endl;
            }
        }
    }
}
int main(){
    fastio;
    compute();
}