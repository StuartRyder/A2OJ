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
#define   in(n,arr)       for(auto i=0 ; i<n ; i++) cin>>arr[i]
#define   out(n,arr)      for(auto i=0 ; i<n ; i++) cout<<arr[i]<<" "
/* Created By Stuart Ryder aka Anurag Srivastava*/

struct university
{
    multiset<ll, std::greater<ll>> student;
    ll scount = 0;
    vl prefixsum;
};

void cal()
{
    ll n;
    cin >> n;
    ll U[n] = {0}, Si[n] = {0};
    ll NoUni = 0;
    ll maxCountofStudents = 0;
    for (auto i = 0; i < n; i++)
    {
        cin >> U[i];
        if (U[i] > NoUni)
            NoUni ++;
    }
    in(n, Si);
    struct university Arr[NoUni];
    for (auto i = 0; i < n; i++)
    {
        ll q = U[i];
        Arr[q - 1].scount++;
        Arr[q - 1].student.insert(Si[i]);
    }

    for (auto i = 0; i < NoUni; i++)
        if (Arr[i].scount > maxCountofStudents)
            maxCountofStudents = Arr[i].scount;


    for(auto i=0; i<NoUni; i++){
        for(auto j=0; j<Arr[i].scount;j++)
            multiset<ll>::iterator it;
            vector<ll>::iterator it1;
            
            

    }


    ll ans[n] = {0};
    for (auto i = 1; i <= maxCountofStudents; i++)
    {
        ll sum = 0;
        for (auto j = 0; j < NoUni; j++)
        {
            ll rem = Arr[j].scount % i;
            multiset<ll>::iterator it;
            ll pp = 1;
            for (it = Arr[j].student.begin(); it != Arr[j].student.end(); ++it)
            {
                if (pp <= Arr[j].scount - rem)
                    sum += (*it);
                pp++;
                if (pp > Arr[j].scount - rem)
                    break;
            }

            ans[i-1] = sum;
        }
    }
        out(n,ans);
        cout<<endl;
}

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t;
        cin >> t;
        while (t--)
        {
            cal();
        }
    }