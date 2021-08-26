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
#define VITR vector<ll>::iterator
/* Created By Stuart Ryder aka Anurag Srivastava*/
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f
void compute()
{
    // ll n;
    // cin >> n;
    // ll ans;
    // vl arr(n);
    // in(n, arr);
    // sort(arr.begin(), arr.end());
    // VITR it;
    // it = lower_bound(arr.begin(), arr.end(), 0);
    // int p = 0;
    // int z=0;
    // if (it - arr.begin() == 0 && arr[0] >= 0)
    //     ans = 1;
    // else
    // {
    //     int x = it - arr.begin();
    //     ans = x;
    //     for (auto i = x; i < n /*&& arr[i] < (-1 * arr[0])*/; i++)
    //     {
    //         //cout<<"asdad"<<endl;
    //         int f=0;
    //         for(auto j=0;j<i-1;j++){
    //             if(abs(arr[j]-arr[j+1])<arr[i])
    //             {f++;
    //             //cout<<arr[i]<<" "<<i<<endl;
    //             break;}
    //             if(arr[i-1]>0)
    //             f++;
    //         }
    //         if(f>=1)
    //         break;
    //         // if (p == 1 && arr[i-1] != 0)
    //         //     break;
    //         //     if(z>=2 && arr[i]>0)
    //         //     break;
    //         if (arr[i] == arr[i - 1] && arr[i] != 0)
    //            break;
    //         else
    //             {
    //             //     if(arr[i]==0)
    //             //     z++;
    //             // if (arr[i] >= 0)
    //             //     p++;
    //             ans++;
    //             }
    //     }
    // }
    // cout << ans << endl;
    int  n, ans, mn;
    bool flag;const int inf = 1e9 + 10;
    cin >> n, ans = 0;
    int a[n];
		for (int i = 1; i <= n; ++ i)
			cin >> a[i], ans += (a[i] <= 0);
		sort(a + 1, a + n + 1), mn = inf;
		for (int i = 1; i <= n; ++ i)
			if (a[i] > 0)
				mn = min(mn, a[i]);
		flag = (mn < inf);
		for (int i = 2; i <= n; ++ i)
			if (a[i] <= 0)
				flag &= (a[i] - a[i - 1] >= mn);
		if (flag)
			cout << ans + 1 << endl;
		else
			cout << ans << endl;
}
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        compute();
    }
}