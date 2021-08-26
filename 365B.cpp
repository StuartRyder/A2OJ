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
// void gen(){
//     cout<<"int arr={0,1,";
//     ll a=0;
//     ll b=1;
//     for(auto i=1;i<=10000;i++){
//         ll c=a+b;
//         cout<<c<<",";
//         a=b;
//         b=c;
//     }
//     cout<<"};";
// }
void compute(){
    ll n;
    cin>>n;
    vl a(n);
    in(n,a);
    ll i=2;
    ll ans=0;
    while(i<n){
        ll c=0;
        while(a[i]==(a[i-1]+a[i-2]) && i<n){
            c++;
            i++;
        }
        if(c>ans)
        ans=c;
        i++;
    }
    if(n>=2)
    cout<<ans+2<<endl;
    else
    cout<<1<<endl;
}
int main(){
    fastio;
    //gen();
   compute();
}
