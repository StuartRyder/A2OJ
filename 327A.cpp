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
ll dp[104];
ll ar[104];
int main()
{
    fastio;
	cin.tie(0);
    ll n;
    cin >> n;
    ll ones=0;
    ll x;
    for(ll i=0;i<n;i++)
    {
    	cin >> x;
    	if(x==1)
    	{
    		ones++;
    		ar[i]=-1;
		}
		else
		ar[i]=1;
	}
	dp[0]=ar[0];
	for(ll i=1;i<n;i++)
		dp[i]=max(ar[i]+dp[i-1],ar[i]) ;
		
	cout<< *max_element(dp,dp+n)+ones;	
return 0;
}