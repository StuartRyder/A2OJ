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
   // reverse(s.begin(),s.end());
    size_t found = s.find('1');
    if (found == string::npos)
    {
        cout<<0<<endl;
        //return;
    }
    else
    {
        size_t f=s.find('0',found);
        if(f == string::npos)
        {
            string s1;
            size_t t=s.find('0');
            if(t== string::npos)
            s1=s.substr(1);
            else
            s1=s.substr(t+1);
            //reverse(s1.begin(),s1.end());
            cout<<s1<<endl;
            //return;
        }
        else
        {
            string s1="";//=s.substr(0,f-1)+s.substr(f+1);
            for(auto i=0;i<s.size();i++)
            if(i!=f)
            s1+=s[i];
            cout<<s1<<endl;
            //reverse(s1.begin(),s1.end());
            //cout<<s1<<endl;
            //return;
        }
        
    }
    
}