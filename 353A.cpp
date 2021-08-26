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
    int n;
    cin>>n;
    int x1=0;
    int x2=0;
    int a[n][2];
    for(auto i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i][0]=x;
        a[i][1]=y;
        x1+=x;
        x2+=y;
    }
    if(x1%2==0 && x2%2==0)
    {cout<<0<<endl;
    return;}
    for(auto i=0;i<n;i++){
        x1-=a[i][0];
        x2-=a[i][1];
        x1+=a[i][1];
        x2+=a[i][0];
        if(x1%2==0 && x2%2==0)
        {cout<<1<<endl;return;}
    }
    cout<<-1<<endl;
}
int main(){
    fastio;
    compute();

}