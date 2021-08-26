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
void compute(){
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    for(auto i=0;i<n;i++){
        ll t;
        cin>>t;
        s.insert(t);
    }
    if(k==0){
        cout<<s.size()<<endl;
        return;
    }

    ll max=*(s.rbegin());
    ll mex=0;
    //cout<<*(s.end())<<endl;
    ll i;
    for(i=0;i<=max;i++){
        if(s.find(i)==s.end())
        {
            break;
        }
    }
    if(i==max+1)
    {mex=max+1;
    cout<<s.size()+k<<endl;
    return;}
    else
    {
        ll c=0;
        mex=i;
        ll back=0;
        for(auto j=1;j<=k;j++){
            ll S=(max+mex)/2;
            ll Q=(max+mex)%2;
            if(Q==0)
            s.insert(S);
            else
            s.insert(S+1);
            if(j==1 || back!=S)
            back=S;
            if(back==S)
            break;
            //cout<<S<<" "<<Q<<endl; 
        }
    // for (auto it = s.begin(); it !=s.end(); ++it)
    //     cout << ' ' << *it<<" ";

        cout<<s.size()<<endl;
        return;
    }
}
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--){
        compute();
    }
}