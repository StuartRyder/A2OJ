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
    int a[5][5]={1};
    int b[3][3];
    for(auto i=0;i<3;i++){
        for(auto j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    for(auto i=0;i<5;i++){
        for(auto j=0;j<5;j++){
            a[i][j]=1;
        }
    }

    for(auto i=0,x=1;i<3;i++){
        for(auto j=0,y=1;j<3;j++){
            if(b[i][j]%2!=0){
                a[x+i][j+y]=(a[i+x][j+y]==1)?0:1;
                a[x+i-1][j+y]=(a[i+x-1][j+y]==1)?0:1;
                a[x+i+1][j+y]=(a[i+x+1][j+y]==1)?0:1;
                a[x+i][j+y-1]=(a[i+x][j+y-1]==1)?0:1;
                a[x+i][j+y+1]=(a[i+x][j+y+1]==1)?0:1;
            }
        }
    }

    for(auto i=1;i<=3;i++){
        for(auto j=1;j<=3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}