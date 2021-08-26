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
    ll k,n,m;
    cin>>k>>n>>m;
    vl a(n);
    vl b(m);
    in(n,a);
    in(m,b);
    ll z=k;
    vl c(n+m);
    // sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    // for(auto i=0;i<n;i++)
    // c[i]=a[i];
    // for(auto i=0;i<m;i++){
    //     c[i+n]=b[i];
    // }
    // sort(c.begin(),c.end());
    // for(auto i=0;i<n+m-1;i++){
    //     if(c[i]==0)
    //     z++;
    //     else
    //     {
    //         if(c[i]>=z){
    //             cout<<-1<<endl;
    //             return;
    //         }
    //     }
        
    // }
    for(auto i=0,q=0,w=0;i<n+m;i++){
        if( a[w]<=z && w<n){
            c[i]=a[w];
            if(a[w]==0)
            z++;
            w++;
            continue;
        }
        else if(b[q]<=z && q<m){
            c[i]=b[q];
            if(b[q]==0)
            z++;
            q++;
            continue;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    out(n+m,c);
}
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--){
        cout<<endl;
        compute();
    }
}