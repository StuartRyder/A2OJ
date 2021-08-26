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
    ll n,m,d;
    cin>>n>>m>>d;
    ll a[n][m]={-1};
    ll c=0;ll b[n*m];
    for(auto i=0;i<n;i++)
    for(auto j=0;j<m;j++)
    {cin>>a[i][j];c+=a[i][j];}
    
        ll k=0;
        for(auto i=0;i<n;i++){
            for(auto j=0;j<m;j++,k++)
            b[k]=a[i][j];
        }
    sort(b,b+n*m);
    ll ans=0;
    for(auto i=0;i<n*m;i++){
        ans+=abs(b[i]-b[((n*m)/2)])/d;
        if(abs(b[i]-b[((n*m)/2)])%d!=0)
        {
            cout<<-1<<endl;return;
        }
    }
     cout<<ans<<endl;
}
int main(){
    fastio;
    compute();
}