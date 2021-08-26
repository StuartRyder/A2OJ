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
void radix_sort(vector<pair<pair<int, int>, int>> &a)
{
    int n = a.size();
    {
        vector<int> cnt(n);
        for (auto x : a)
        {
            cnt[x.first.second]++;
        }
        vector<pair<pair<int, int>, int>> a_new(n);
        vector<int> pos(n);
        pos[0] = 0;
        for (int i = 1; i < n; i++)
        {
            pos[i] = pos[i - 1] + cnt[i - 1];
        }
        for (auto x : a)
        {
            int i = x.first.second;
            a_new[pos[i]] = x;
            pos[i]++;
        }
        a=a_new;
    }
    {
        vector<int> cnt(n);
        for (auto x : a)
        {
            cnt[x.first.first]++;
        }
        vector<pair<pair<int, int>, int>> a_new(n);
        vector<int> pos(n);
        pos[0] = 0;
        for (int i = 1; i < n; i++)
        {
            pos[i] = pos[i - 1] + cnt[i - 1];
        }
        for (auto x : a)
        {
            int i = x.first.first;
            a_new[pos[i]] = x;
            pos[i]++;
        }
        a=a_new;
    }
}

int main()
{
    fastio;
    string s;
    cin >> s;
    s = s + '$';
    //cout<<s<<endl;
    int n = s.length();
    vector<int> p(n), c(n);
    {
        //k=0
        vector<pair<char, int>> a(n);
        for (auto i = 0; i < n; i++)
            a[i] = {s[i], i};
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
            p[i] = a[i].second;
           // out(n,p);
        c[p[0]] = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
            {
                c[p[i]] = c[p[i - 1]];
            }
            else
            {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
        //out(n,p);
        //out(n,c);
    }
    int k = 0;
    while ((1 << k) < n)
    { 
        out(n,p);
        out(n,c);
        vector<pair<pair<int, int>, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = {{c[i], c[i + (1 << k) % n]}, i};
        }
        radix_sort(a);
        for (auto i = 0; i < n; i++){
        cout << a[i].first.first << " "<<a[i].first.second<<" "<<a[i].second;  cout << endl;}


        for (int i = 0; i < n; i++)
            p[i] = a[i].second;
            
        c[p[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
            {
                c[p[i]] = c[p[i - 1]];
            }
            else
            {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
        k++;
        cout<<endl<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}