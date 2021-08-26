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
#define   REP(i,n)        for(auto i=0;i<n;i++)
#define   FOR(i,a,b)      for(auto i=a;i<b;i++)
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
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f
void compute(){
    ll n;
    cin>>n;
    vl a(n);
    in(n,a);
    ll k=0;
    vl a1(n);
    ll f=0;
    a1[0]=a[0];
    FOR(i,1,n){
        a1[i]=a1[i-1]+a[i];
        if(a[i-1]!=a[i])
        f++;
    }
    if(f==0 || n==1){
        cout<<0<<endl;
        return;
    }
     ll z=(a1[n-1]/n)+1;
     //cout<<z<<endl;
    // REP(i,n){
    //     a1[i]=a1[n]-z;
    // }
    //out(n,a1);

    if(a1[n-1]%n!=0){
        cout<<-1<<endl;
        return;
    }

    sort(a.begin(),a.end());
    //out(n,a);
    vector<ll>::iterator t;
     t=lower_bound(a.begin(),a.end(),z);
     ll q=t-a.begin();
    cout<<(n-q)<<endl;
}
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--){
        compute();
    }
}