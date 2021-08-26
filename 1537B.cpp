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
    ll n, m, i, j;
    cin >> n >> m >> i >> j;
    ll x, y, x1, y1;
    if (i == 1 && j == 1)
    {
        if (n == 1 && m == 1)
        {
            x = 1;
            y = 1;
        }
        else
        {
            if (n == 1)
            {
                x = 1;
                y =2;
            }
            else
            {
                x = 2;
                y = 1;
            }
        }
    }
    else
    {
        x = 1;
        y = 1;
    }
    if (i == n && j == m)
    {
        if (n - 1 == 0 && m - 1 == 0)
        {
            x1 = n;
            y1 = m;
        }
        else
        {
            if (n - 1 == 0)
            {
                x1 = n;
                y1 = m - 1;
            }
            else
            {
                x1 = n - 1;
                y1 = m;
            }
        }
    }
    else
    {
        x1 = n;
        y1 = m;
    }
    cout << x << " " << y << " " << x1 << " " << y1 << endl
         << endl;
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