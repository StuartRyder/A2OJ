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
    string s1;
    string s2;
    getline(cin, s1);getline(cin, s2);
    // cin>>s2;
    //cout<<s1<<" "<<endl<<s2<<endl;
    map<char, ll> A;
    map<char, ll> B;
    for(auto i='a';i<='z';i++){
        A.insert(pair<char,ll>(i,0));
        B.insert(pair<char,ll>(i,0));
    }
    for(auto i='A';i<='Z';i++){
        A.insert(pair<char,ll>(i,0));
        B.insert(pair<char,ll>(i,0));
    }
    for(auto i=0;i<s1.size();i++){
        char c=s1[i];
        if(c!=' '){
            A[c]++;
        }
    }
    
    for(auto i=0;i<s2.size();i++){
        char c=s2[i];
        if(c!=' '){
            B[c]++;
        }
    }
    //     map<char, ll>::iterator itr;
    // for (itr =A.begin(); itr != A.end(); ++itr) {
    //     cout << '\t' << itr->first
    //          << '\t' << itr->second << '\n';
    // }
    //         map<char, ll>::iterator itr1;
    // for (itr1 =B.begin(); itr1 != B.end(); ++itr1) {
    //     cout << '\t' << itr1->first
    //          << '\t' << itr1->second << '\n';
    // }
    ll c=0;
    for(auto i='a';i<='z';i++){
        if(B[i]>A[i]){
            c++;
            break;
        }
    }
    for(auto i='A';i<='Z';i++){
        if(B[i]>A[i]){
            c++;
            break;
        }
    }
    if(c>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    
}
int main(){
    fastio;
    compute();
}