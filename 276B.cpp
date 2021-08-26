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
bool ispalindrome(string s){
    if (s == string(s.rbegin(), s.rend())) {
    return true;
}
return false;
}
 void compute(){
    string s;
    cin>>s;
    ll c[26]={0};
    for(auto i=0;i<s.size();i++){
        c[s[i]-97]++;
    }
    ll k=0;
    for(auto i=0;i<26;i++){
        if(c[i]%2!=0)k++;
        //cout<<c[i]<<endl;
    }
    if(k==0)
    cout<<"First"<<endl;
    else if(k%2==0){
        cout<<"Second"<<endl;
        return;
    }
    else
    {
        cout<<"First"<<endl;
        return;
    }
 }
int main(){
    fastio;
    compute();
}