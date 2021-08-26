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
#define   FOR(i,a,b)      for(int i=a;i<b;i++)
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
/* Created By Stuart Ryder aka Anurag Srivastava*/
void compute()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> strg(n + 1, -1);
    FOR(i, 0, m)
    {
        vector<ll> done(4, 0), left(4, 0), inp;
        ll a, b, c;
        cin >> a >> b >> c;
        inp.pb(a);
        inp.pb(b);
        inp.pb(c);

        if (strg[a] != -1)
        {
            left[1] = strg[a];
            done[strg[a]] = 1;
        }
        if (strg[b] != -1)
        {
            left[2] = strg[b];
            done[strg[b]] = 1;
        }
        if (strg[c] != -1)
        {
            left[3] = strg[c];
            done[strg[c]] = 1;
        }
        FOR(i, 1, 4)
        {
            if (left[i] == 0)
            {
                FOR(j, 1, 4)
                {
                    if (done[j] == 0)
                    {
                        left[i] = j;
                        done[j] = 1;
                        strg[inp[i - 1]] = j;
                        break;
                    }
                }
            }
        }
    }
    FOR(i, 1, n + 1)
    {
        cout << strg[i] << " ";
    }
    cout << endl;
}
int main()
{
    fastio;
    ll t = 1;
    //cin>>t;
    while (t--)
    {
        compute();
    }
}