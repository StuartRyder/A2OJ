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
int main()
{
    fastio;
    int r, c;
    cin >> r >> c;
    char a[r][c];
    for (auto i = 0; i < r; i++)
    {
        for (auto j = 0; j < c; j++)
            cin >> a[i][j];
    }
    int ans = 0;
    for (auto i = 0; i < r; i++)
    {
        int k = 0;
        for (auto j = 0; j < c; j++)
        {
            if (a[i][j] == 'S')
            {
                k++;
                break;
            }
        }
        if (k == 0)
        {
            ans += c;
            for (auto j = 0; j < c; j++)
                a[i][j] = '#';
        }
    }
    for (auto j = 0; j < c; j++)
    {
        int k = 0;
        int t = 0;
        for (auto i = 0; i < r; i++)
        {
            if (a[i][j] == 'S')
            {
                k++;
                break;
            }
            else if (a[i][j] == '.')
            {
                t++;
            }
        }
        if (k == 0 && t > 0)
        {
            ans += t;
            for (auto i = 0; i < r; i++)
                a[i][j] = '#';
        }
    }
    cout << ans << endl;
}