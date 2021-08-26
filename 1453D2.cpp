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
#define   pb              push_back
#define   REP(i,n)        for(int i=0;i<n;i++)
#define   FOR(i,a,b)      for(int i=a;i<=b;i++)
#define   all(v)          v.begin(),v.end()
#define   F               first
#define   S               second
#define   vl              vector<ll>
#define   vi              vector<int>
#define   itr(a)          ::iterator a
#define   lb              lower_bound
#define   ub              upper_bound
#define   ULL             unsigned long long
#define   ret             return 
#define   ll              long long int
#define   in(n,arr)       for(auto i=0 ; i<n ; i++) cin>>arr[i]
#define   out(n,arr)      for(auto i=0 ; i<n ; i++) cout<<arr[i]<<" "; cout<<endl
#define   fastio                    ios::sync_with_stdio(false);cin.tie(0);

int compute(int x,int y,int k)
{
    int z=0;
    int p=1;
    while(x>0 || y>0)
    {
        int a=x%k;
        x=x/k;
        int b=y%k;
        y=y/k;
        int c=(a-b+k)%k;
        z=z+p*c;
        p=p*k;
    }
    return z;
}

int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout << 0 << endl;
            else if(i%2==0)
                cout << compute(i,i-1,k) << endl;
            else
                cout << compute(i-1,i,k) << endl;
            int v;
            cin >> v;
            if(v==1)
                break;
        }
    }
    return 0;
}