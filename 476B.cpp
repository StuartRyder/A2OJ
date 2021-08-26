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
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
void compute(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int a[2][3]={0};
    ll k=0;
    double ans=0;
    for(auto i=0;i<s1.length();i++){
        if(s1[i]=='+'){
            a[0][0]++;
            a[0][2]++;
        }
        if(s2[i]=='+'){
            a[1][0]++;
            a[1][2]++;
        }
        if(s1[i]=='-'){
            a[0][1]++; 
            a[0][2]--;
        }
        if(s2[i]=='-'){
            a[1][1]++; 
            a[1][2]--;
        }
        if(s2[i]=='?')
        k++;
    }
    // for(auto i=0;i<2;i++){
    //     for(auto j=0;j<3;j++)
    //     cout<<a[i][j]<<" ";
    //     cout<<endl;
    // }
    //cout<<a[0][0]-a[1][0]+a[0][1]-a[1][1]<<endl;
    if(abs(a[0][2]-a[1][2])>k)
    {
        ans=0;
        cout << fixed << setprecision(12) << ans <<endl;
        return;
    }
    else if(a[0][0]-a[1][0]+a[0][1]-a[1][1]==0){
        ans=1;
        cout << fixed << setprecision(12) << ans <<endl;
        return;
    }
    ans=nCr(k,abs(a[0][1]-a[1][1]))/(pow(2,k));
    cout<< fixed << setprecision(12) <<ans<<endl;
    return;
}
int main(){
    fastio;
    compute();

}