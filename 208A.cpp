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
    string s;
    cin>>s;
    string ans="";
    string s1="WUB";
    ll k=0;ll p=0;
    for(auto i=0;i<s.size();){
        string t=s.substr(i,3);
        if(t==s1){
            i+=3;
        }
        else{k=i;p=i;
            while(i<s.size()){
                string t1=s.substr(i,3);
                if(t1==s1){
                    break;
                }
                i++;
                p++;
            }
            ans+=s.substr(k,p-k)+" ";
            //cout<<ans<<endl;
        }
    }
    cout<<ans<<endl;
}