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
    ll n;
    cin>>n;
    vl arr(n);
    in(n,arr);
    vl ans(3*n);
    ll k=0;
    // for(auto i=n-1;i>=1;i--){
    //     for(auto j=0;j<i;j++){
    //         if(arr[j]==2*arr[i]){
    //             k++;
    //             ans.push_back(2);
    //             ans.push_back(j+1);
    //             ans.push_back(i+1);
    //             arr[i]=-arr[i];
    //         }
    //     }
    // }
    // for(auto i=1;i<n-1;i++){
    //     for(auto j=n-1;j>i;j--){
    //         if(arr[j]==-2*arr[i]){
    //             k++;
    //             ans.push_back(1);
    //             ans.push_back(i+1);
    //             ans.push_back(j+1);
    //             arr[i]=-arr[i];
    //         }
    //     }
    // }
    // k=3*(n-k)+k;
    k=3*n;
    cout<<k<<endl;
    for(auto i=1;i<=n/2;i++){
        for(auto j=1;j<=6;j++){
            if(j%2!=0){
                arr[2*i-2]=arr[2*i-2]+arr[2*i-1];
                cout<<1<<" "<<2*i-1<<" "<<2*i<<endl;
            }
            else
            {
                arr[2*i-1]=arr[2*i-1]-arr[2*i-2];
                cout<<2<<" "<<2*i-1<<" "<<2*i<<endl;
            }   
        }
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