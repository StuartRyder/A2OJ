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
    int x,y;
    cin>>x>>y;
    int c=0;
    int x1,x2,y1,y2;
    if(x>0 && y>0)
    c=-1;
    else if(x<0 && y>0)
    c=1;
    else if(x<0 && y<0)
    c=-1;
    else if(x>0 && y<0)
    c=1;
    else if(x==0){
        x1=-1*abs(y);
        x2=abs(y);
        y2=y=y1;
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
        return 0;
    }
    int z=y-c*x;
    if(y>0)
    {x1=0;
    y1=z;
    x2=-1*z/c;
    y2=0;
    if(x2<x1)
    {
        int x3=x1;
        x1=x2;
        x2=x3;
        int y3=y1;
        y1=y2;
        y2=y3;
    }
    }
    else{
    x1=0;
    y1=z;
    x2=-1*z/c;
    y2=0;
        if(x2<x1)
    {
        int x3=x1;
        x1=x2;
        x2=x3;
        int y3=y1;
        y1=y2;
        y2=y3;
    }
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    return 0;
}