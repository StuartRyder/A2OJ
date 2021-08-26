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
    string s,s1;
    cin>>s;
    cin>>s1;
    ll c=0;
    string s2="";
    string s3="";
    if(s.size()!=s1.size()){
        cout<<"NO"<<endl;
    }
    else
    {
    for(auto i=0;i<s.size();i++){
        if(s[i]!=s1[i]){
            c++;
            s2+=s[i];
            s3+=s1[i];
        }
    }
    if(c==2){
        reverse(s3.begin(),s3.end());
        if(s2==s3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;   
    }
    else
    cout<<"NO"<<endl;
    }
}