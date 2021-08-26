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
int parent[101];
int rnk[101]={0};
int freq[101]={0};

int find(int x){
    if(x!=parent[x])
    parent[x]=find(parent[x]);

    return parent[x];
}

void Union(int x, int y){
    int a=find(x);
    int b=find(y);
    if(a==b) return;
    
    if(rnk[a]<rnk[b]){
        parent[a]=b;
    }
    else{
        parent[b]=a;
        if(rnk[a]==rnk[b]){
            rnk[b]++;
        }
    }
}

void solve(){
    int n,m;
    int no_language=0,count=0;
    for(auto i=0;i<101;i++){
        parent[i]=i;
    }
    cin>>n>>m;
    int u,v,k;
    for(auto i=0;i<n;i++){
        cin>>k;
        if(k==0){
            no_language++;
            continue;
        }
        cin>>u;
        freq[u]++;
        for(auto j=1;j<k;j++){
            cin>>v;
            freq[v]++;
            Union(u,v);
        }
    }
    int ans=-1;
    for(auto i=1;i<=m;i++){
        if(freq[i]==0)count++;
        else if(parent[i]==i){
            ans++;
        }
    }
    //cout<<count<<" "<<n<<endl;
    if(count==m)cout<<n<<endl;
    else{
        cout<<ans+no_language<<endl;
    }
}

int main(){
    fastio;
    solve();
}