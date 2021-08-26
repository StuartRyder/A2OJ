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
    vl a(n);
    in(n, a);
    sort(a.begin(), a.end());
    ll c = 0;
    for (auto i : a)
    {
        if (a[i] == 5 || a[i] == 7)
        {
            c++;
            break;
        }
    }
    if (c > 0)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (auto i = 0; i < n / 3; i++)
        {
            if (a[i] < a[i + n / 3] && a[i + n / 3] < a[i + 2 * n / 3])
            {
                if (a[i + n / 3] % a[i] == 0 && a[i + 2 * n / 3] % a[i + n / 3] == 0)
                    //cout<<a[i]<<" "<<a[i+n/3]<<" "<<a[i+2*n/3]<<endl;
                    continue;
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        for (auto i = 0; i < n / 3; i++)
        {
            if (a[i] < a[i + n / 3] && a[i + n / 3] < a[i + 2 * n / 3])
            {
                if (a[i + n / 3] % a[i] == 0 && a[i + 2 * n / 3] % a[i + n / 3] == 0)
                    cout << a[i] << " " << a[i + n / 3] << " " << a[i + 2 * n / 3] << endl;
            }
        }
    }
}
        int main()
        {
            fastio;
            compute();
        }