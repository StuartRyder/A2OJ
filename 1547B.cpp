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
    string s;
    cin>>s;
    int l =s.size();
    int c=0;
    char a[l];
    int b[l];
    ll x=-1;
    ll y=-1;
    for(auto i='a';i<=(char)(l+96);i++)
    {
        ll found=s.find(i);
        if(found==string::npos){
            c++;
            break;
        }
        if(x==y){
            x=found-1;
            y=found+1;
            continue;
        }
        if(found==x){
            x--;
            continue;
        }
        if(found==y){
            y++;
            continue;
        }
        if(found!=x && found!=y){
            c++;
            break;
        }
    }

    for(auto i=1;i<l;i++){

    }
    if(c>0)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
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