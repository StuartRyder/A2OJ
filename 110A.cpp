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
    ll n;
    cin>>n;
    ll n1=n;
    int c=0;
    int c1=0;
    while(n1!=0){
        ll t=n1%10;
        if(t==4 || t==7)
        c1++;
        n1=n1/10;
    }
    // if(c1==c){
    // cout<<"YES"<<endl;
    // }
    // else{
        c=c1;
        //cout<<c1<<" "<<c<<endl;
        ll c2=0;
        ll c3=0;
        while(c1!=0){
        ll t=c1%10;
        if(t==4 || t==7)
        c2++;
        c3++;
        c1=c1/10; 
        }
        //cout<<c2<<" "<<c3<<endl;
        if(c2==c3 && c!=0){
        cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    //}
}
