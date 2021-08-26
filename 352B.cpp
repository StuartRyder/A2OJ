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
ll n, i, cnt[100001], ans[100001], x, k[100001], m, v, b[1000001];//array size of 99999 cause problems in declaration inside stack memory so try to create such large arrays in heap memory 
int main()
{
    fastio;
    cin >> n;
    while (n--)
    {
        cin >> m;
        cnt[m]++;
        if (k[m] != 0)
        {
            if (cnt[m] == 2)
                ans[m] = k[m] - n;
            if (n + ans[m] != k[m])
                b[m] = 1;
        }
        k[m] = n;
    }
    for (i = 1; i < 100001; i++)
    {
        if (!b[i] and cnt[i])
            v++;
    }
    cout << v << endl;
    for (i = 1; i < 100001; i++)
    {
        if (!b[i] and cnt[i])
            cout << i << " " << ans[i] << endl;
    }
}