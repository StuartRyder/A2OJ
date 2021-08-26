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
void compute(){
ll n, m;
    cin >> n >> m;
    if (n < m)
    {
        //ll b=0;
        for(auto i=1;i<=n;i++){
            cout<<"GB";
        }
        for(auto i=1;i<=m-n;i++)
        cout<<"G";
        return;
    }
    if(n==m)
    {
        for(auto i=1;i<=n+m;i=i+2){
            cout<<"BG";
    }
    return;
    }
    else
    {
        
    //ll g=0;
        for(auto i=1;i<=m;i++){
            cout<<"BG"; 
        }
        for(auto i=1;i<=n-m;i++)
        cout<<"B";
        return ;
    }

}
int main()
{
    fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    compute();
    
}