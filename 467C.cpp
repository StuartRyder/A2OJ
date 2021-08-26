
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
    using namespace std;
    long long n,m,k,p[5005],r[5005][5005],i,j;
    int main()
    {
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    	{cin>>p[i];
    p[i]+=p[i-1];}

    // for(auto i=1;i<=n;i++)
    // cout<<i<<" "<<p[i]<<endl;

    for(i=1;i<=k;i++)
    	for(j=m;j<=n;j++)
    		{r[i][j]=max(r[i][j-1],r[i-1][j-m]+p[j]-p[j-m]);
            // for(auto i=0;i<n+1;i++){
            //     for(auto j=0;j<n+1;j++)
            //     cout<<r[i][j]<<" ";
            //     cout<<endl;
            // }
            // cout<<endl<<endl;
            // cout<<r[i][j-1]<<" "<<r[i-1][j-m]<<" "<<p[j]-p[j-m]<<" "<<r[i-1][j-m]+p[j]-p[j-m]<<" "<<r[i][j]<<endl;
            // cout<<endl<<endl;
            }

            
    cout<<r[k][n];
    }