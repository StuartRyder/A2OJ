#include <bits/stdc++.h>
#include <iostream>
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
#define pb push_back
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define vl vector<ll>
#define vi vector<int>
#define itr(a) ::iterator a
#define lb lower_bound
#define ub upper_bound
#define ULL unsigned long long
#define ret return
#define ll long long int
#define in(n, arr)               \
    for (auto i = 0; i < n; i++) \
    cin >> arr[i]
#define out(n, arr)              \
    for (auto i = 0; i < n; i++) \
        cout << arr[i] << " ";   \
    cout << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
/* Created By Stuart Ryder aka Anurag Srivastava*/
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f
void compute()
{
    ll n;
    cin >> n;
    vl h(n);
    in(n, h);
    int x = -1;
    ll d = LLONG_MAX;
    sort(h.begin(), h.end());
    FOR(i, 0, n - 2)
    {
        if (h[i + 1] - h[i] < d)
        {
            d = h[i + 1] - h[i];
            x = i;
        }
    }
    vl ans(n);
    ans[0] = h[x];
    ans[n - 1] = h[x + 1];
    ll k[n - 2];
    ll a = 0;
    for (auto i = 0; i < n; i++)
    {
        if (i != x && i != x + 1)
        {
            k[a] = h[i];
            a++;
        }
    }
    a=1;
    for(auto i=x+2;i<n;i++,a++)
    ans[a]=h[i];
    for(auto i=0;i<x;i++,a++)
    ans[a]=h[i];

    // if (n % 2 == 0)
    // {
    //     a = 1;
    //     for (auto i = (n - 2) / 2; i < n - 2; i++, a++)
    //         ans[a] = k[i];
    //     for (auto i = 0; i < (n - 2) / 2; i++, a++)
    //         ans[a] = k[i];
    // }
    // else
    // {
    //     a = 1;
    //     //ans[1]=k[((n-2)/2)];
    //     for (auto i = ((n - 2) / 2)+1; i < n - 2; i++, a++)
    //         ans[a] = k[i];
    //     for (auto i = 0; i <= (n - 2) / 2; i++, a++)
    //         ans[a] = k[i];
    // }

out(n, ans);
}
int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        compute();
    }
}