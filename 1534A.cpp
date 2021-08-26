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
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f
void compute(){
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    REP(i,n){
        REP(j,m)
        cin>>a[i][j];
    }
    char c[n][m];
    char c1[n][m];
    REP(i,n){
        REP(j,m){
            if((i+j)%2==0){
                c[i][j]='R';
                c1[i][j]='W';
            }
            else
            {
                c1[i][j]='R';
                c[i][j]='W';
            }    
        }
    }
    ll f=0;ll f1=0;
       REP(i,n){
        REP(j,m){
            if(a[i][j]!='.'){
            if(a[i][j]==c[i][j]){
                f++;
            }
            if(a[i][j]==c1[i][j])
            {
                f1++;
            } 
            }   
        }
    }

    if(f>0 && f1==0){
        cout<<"YES"<<endl;
        REP(i,n){
            REP(j,m)
            cout<<c[i][j];
            cout<<endl;
        }
        return;
    }
    if(f1>0 && f==0){
        cout<<"YES"<<endl;
        REP(i,n){
            REP(j,m)
            cout<<c1[i][j];
            cout<<endl;
        }
        return;
    }
    if(f1>0 && f>0)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(f1==0 && f==0){
        cout<<"YES"<<endl;
        REP(i,n){
            REP(j,m)
            cout<<c[i][j];
            cout<<endl;
        }
        return;
    }
}
int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        compute();
    }
}