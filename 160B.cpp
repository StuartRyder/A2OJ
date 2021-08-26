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
void compute()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vl a(n);
    vl b(n);
    for (auto i = 0; i < n; i++)
    {
        a[i] = s[i] - 48;
        b[i] = s[n + i] - 48;
    }
    // out(n,a);
    // out(n,b);
    ll sum = 0;
    ll sum1 = 0;
    for (auto i =0;i<n;i++)
    {
        //cout<<"!23435"<<endl;
        sum += a[i];
    }
    for (auto i =0;i<n;i++)
    {
        sum1 += b[i];
    }
    //cout<<sum<<" "<<sum1<<endl;
    if (sum == sum1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
            ll c = 0;
            ll c1 = 0;
            for (auto i = 0; i < n; i++)
            {
                if (a[i] < b[i])
                    c++;
                if (a[i] > b[i])
                    c1++;
            }
            if (c1 == n || c == n)
                {cout << "YES" << endl;return;}
                // c = 0;
                // c1 = 0;
                // for (auto i = 0; i < n; i++)
                // {
                //     if (a[i] <= b[n - 1 - i])
                //         c++;
                //     if (a[i] >= b[n - 1 - i])
                //         c1++;
                // }
                // if (c1 == n || c == n)
                // {
                //     cout << "YES" << endl;return;
                // }
            cout << "NO" << endl;
    }
}
int main()
{
    fastio;
    compute();
}