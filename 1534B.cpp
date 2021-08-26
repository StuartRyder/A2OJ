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
    vl a(n);
    in(n, a);
    ll ans = 0;
        if(n==1)
        {cout<<a[0]<<endl;
        return;}

    for(auto i=0;i<n;i++){
        if(i==0 && n>=2 && a[0]>a[1]){
            ans=ans+a[0]-a[1];
            a[0]=a[1];
            continue;
        }
        if(i==n-1 && n>=2 && a[n-1]>a[n-2]){
            ans=ans+a[n-1]-a[n-2];
            a[n-1]=a[n-2];
            continue;
        }
        if(i>0 && i<n-1){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                ans=ans+a[i]-max(a[i-1],a[i+1]);
                a[i]=max(a[i-1],a[i+1]);
            }
        }
    }
    for(auto i=0;i<n;i++)
    {
        if(i==0){
            ans+=a[0];
            continue;
        }
        if(i==n-1){
            ans+=a[n-1];
        }
        if(a[i]>a[i-1]){
            ans+=a[i]-a[i-1];
        }
        if(a[i]>a[i+1] && i!=n-1)
        ans+=a[i]-a[i+1];
    }
    cout << ans << endl;
   //out(n,a);
    //cout<<endl;
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