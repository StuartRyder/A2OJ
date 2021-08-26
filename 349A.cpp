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
    int a[n];
    int b[3]={0};
    in(n,a);
    for(auto i=0;i<n;i++){
        if(a[i]==25)
        {++b[0];continue;}
        if(a[i]==50){
            if(b[0]>0){
                --b[0];
                ++b[1];
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        if(a[i]==100){
            if((b[0]>0 && b[1]>0)){
                --b[0];
                --b[1];
                ++b[2];continue;
            }
            else if(b[0]>=3){
                b[0]=b[0]-3;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }    
    }
    cout<<"YES"<<endl;
}
int main(){
    fastio;
    compute();
}