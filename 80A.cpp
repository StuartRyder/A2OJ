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
/* Created By Stuart Ryder aka Anurag Srivastava*/
int main(){
    fastio;
    ll n,m;
    cin>>n>>m;
    vl a;
    bool mark[50];
    for(int i = 0; i<50; i++) {
      mark[i] = true;
    }
  
    for (int p=2; p*p<50; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*p; i<50; i+=p)
                mark[i] = false;
        }
    }
  
    for (int p=2; p<50; p++)
        if (mark[p] == true)
            a.push_back(p);

            std::vector<ll>::iterator it;
            it = std::find (a.begin(), a.end(), n);
            int x=it-a.begin()+1;
            if(a[x]==m)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            
}