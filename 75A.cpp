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
int main()
{
    fastio;
    ll a,b;
    cin>>a>>b;
    ll sum=a+b;
    ll c=0;
    string a1=to_string(a);
    string b1=to_string(b);
    string s=to_string(sum);
    string s1="";
    string a2="";
    string b2="";
    for(auto i=0;i<s.size();i++){
        if(s[i]!='0')
        s1+=s[i];
    }
    for(auto i=0;i<a1.size();i++){
        if(a1[i]!='0')
        a2+=a1[i];
    }
    for(auto i=0;i<b1.size();i++){
        if(b1[i]!='0')
        b2+=b1[i];
    }
    ll i_value = stoi(a2)+stoi(b2);
    string s2=to_string(i_value);
    if(s2!=s1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}