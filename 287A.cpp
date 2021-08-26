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
    char a[6][6]={'$'};
    for(auto i=1;i<=4;i++){
        for(auto j=1;j<=4;j++)
        cin>>a[i][j];
    }
    bool c=false;
    bool t=false;
    for(auto i=1;i<=3 && t==false && c==false;i++){
        for(auto j=1;j<=3;j++){
            int x,y,z,q;
            if(a[i][j]=='#')
            x=1;
            else
            x=-1;
            if(a[i+1][j]=='#')
            y=1;
            else
            y=-1;
            if(a[i][j+1]=='#')
            z=1;
            else
            z=-1;
            if(a[i+1][j+1]=='#')
            q=1;
            else
            q=-1;
            if((x+y+z+q)==4 || (x+y+z+q)==-4)
            {t=true;break;}
            if((x+y+z+q)==2 || (x+y+z+q)==-2){
                c=true;break;
            }
        }
    }
    if(c||t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main(){
    fastio;
    compute();
}