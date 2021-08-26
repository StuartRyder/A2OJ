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
    ll n,m;
    cin>>n>>m;
    vl a(n);
    in(n,a);
    vl b;
    ll sum=0;
    while(m--){
        int t;
        cin>>t;
        if(t==1){
            ll v,x;
            cin>>v>>x;
            a[v-1]=x-sum;
        }
        else if(t==2){
            // transform(begin(a),end(a),begin(a),[](ll y){
            //     ll x;cin>>x;
            //     return y+x;
            //     });
            ll x;
            cin>>x;
            sum+=x;
            // for(auto i=0;i<n;i++)
            // a[i]+=x;
        }
        else{
            ll x;
            cin>>x;
            b.push_back(a[x-1]+sum);
        }
        //cout<<m<<endl;
    }
    //cout<<"end of while"<<endl;
    for(auto i=b.begin();i!=b.end();i++){
        cout<<*i<<endl;
    }
}
int main(){
    fastio;
    compute();
}