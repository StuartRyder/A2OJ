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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string c;
    string ans;
    int flag = 0;
    int k = n / 26 + 1;
    int temp = 1;
    c = "a";
    while (flag == 0)
    {
        // cout<<c<<endl;
        size_t found = s.find(c);
        if (found == string::npos)
        {
            flag++;
            ans = c;
            break;
        }
        else
        {
            if (c[temp - 1] == 'z')
            {
                size_t fo;
                fo = c.find('z');
                for (auto i = fo; i <=temp-1; i++)
                    c[i] = 'a';

                if (fo != 0)
                    c[fo-1]++;
                else
                {
                    c = c + "a";
                    temp++;
                }

                // for (auto i = temp - 1; i >= 0; i++)
                // {
                //     if (i == 0 && c[i] == 'z')
                //     {
                //         c[i] = 'a';
                //         temp++;
                //         c = c + "a";
                //         break;
                //     }
                //     if (c[i] == 'z')
                //         c[i] = 'a';

                //     else
                //     {
                //         c[i]++;
                //         break;
                //     }

                // } //end of incrementation
            }
            else
            {
                c[temp - 1]++;
            }
        }
    }
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