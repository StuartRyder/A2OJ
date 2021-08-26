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
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.first > b.first || (a.first==b.first && a.second<b.second));
}
void compute()
{
    int n, z;
    cin >> n >> z;
    vector<pair<int, int>> a;
    for (auto i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    sort(a.begin(), a.end(),sortbysec);
    vl b(n);
    b[0]=1;
    for(auto i=1;i<n;i++){
        if(a[i].first<a[i-1].first){
            b[i]=b[i-1]+1;
        }
        else if(a[i].first==a[i-1].first && a[i].second>a[i-1].second){
            b[i]=b[i-1]+1;
        }
        else{
            b[i]=b[i-1];
        }
    }
    int t=b[z-1];
    //out(n,b);
    cout<<upper_bound(b.begin(),b.end(),t)-lower_bound(b.begin(),b.end(),t)<<endl;
}
int main()
{
    fastio;
    compute();
}