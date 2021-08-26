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
    ll t,s1,s2,e1,e2;
    cin>>t>>s1>>s2>>e1>>e2;
    string s;
    cin>>s;
    ll c=0;
    ll i=0;
    for(i=0;i<t;i++){
        switch(s[i]){
            case 'N':if(s2<e2){s2+=1;c++;}break;
            case 'S':if(e2<s2){s2-=1;c++;}break;
            case 'E':if(s1<e1){s1+=1;c++;}break;
            case 'W':if(e1<s1){s1-=1;c++;}break;
        }
        if(s1==e1 && s2==e2)break;
    }
    if(i<=t-1)cout<<i+1<<endl;
    else
    cout<<-1<<endl;
}
int main(){
    fastio;
    compute();
}