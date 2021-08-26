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
const int MOD = 1e9 + 7;
//Shortcuts
#define ll long long
#define sz(x) (int)x.size()
#define pb push_back
#define lcm(a, b) (a * b != 0 ? a * b / __gcd(a, b) : 0)
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
//Data Stucture
typedef array<int, 2> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef set<int> si;
typedef map<int, int> mpi;

ll pow(ll x, ll y, ll)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            (res *= x);
        }
        (x *= x) ;
        y >>= 1;
    }
    return res;
}
void solve()
{
    int n;cin>>n;
    int base;cin>>base;
    cout<<"0 ";
    while(--n){
        int temp;cin>>temp;
        if((base&temp) == base){
            cout<<"0 ";
            base = temp;
        }else{
            base = base|temp;
            cout<<(base^temp)<<" ";
        }
    }
    cout<<"\n";
    
}

int main()
{
    clock_t z = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    f1(tc, t)
    {
        // cout << "Case #" << tc << ": ";
        solve();
    }
    //debug("Total Time: %.7f", (double)(clock() - z) / CLOCKS_PER_SEC);
    //r//eturn 0;
}
