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
/* Created By Stuart Ryder aka Anurag Srivastava*/



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    ll n;
    cin>>t;
    while (t--){
        cin>>n;
        char arr[n];
        ll sheep[n+1]={0};
        ll c=0;
        ll count=0;
        sheep[0]=0;
        for(auto i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]=='*'){
                c++;
                sheep[c]=i+1;
            }
        }

       /* out(n,arr);
        out(n+1,sheep);
        cout<<c<<endl;*/

        //if(c%2!=0){
            ll x=c/2+1;
            ll z=1;
            for(auto i=x+1; i<=c;i++){
                count+=sheep[i]-sheep[x]-z;
                z++;
            }
            z=1;
            for(auto i=x-1; i>=1; i--){
                count+=sheep[x]-sheep[i]-z;
                z++;
            }
           // }
            

            /*if(c%2==0){
                ll x1=c/2;
                ll x2=c/2+1;
                ll z=1;
                ll c1=0,c2=0;
                for(auto i=x1+1; i<=c;i++){
                //cout<<"1 "<<i<<c<<c1<<z<<sheep[i]<<sheep[x1]<<endl;
                c1+=sheep[i]-sheep[x1]-z;
               // if(sheep[i]-sheep[x1]-z!=0)
                z++;
            }
            z=1;
            for(auto i=x1-1; i>=1; i--){
                //cout<<"1 "<<i<<c<<c1<<z<<sheep[i]<<sheep[x1]<<endl;
                c1+=sheep[x1]-sheep[i]-z;
                //if(sheep[x1]-sheep[i]-z!=0)
                z++;
            }

            for(auto i=x2+1; i<=c;i++){
                c2+=sheep[i]-sheep[x2]-z;
                //if(sheep[i]-sheep[x2]-z!=0)
                z++;
            }
            z=1;
            for(auto i=x2-1; i>=1; i--){
                c2+=sheep[x2]-sheep[i]-z;
               // if(sheep[x2]-sheep[i]-z!=0)
                z++;
            }
            //cout<<c1<<c2;
            count =min(c1,c2);
            }*/
            cout<<count<<endl;

    }

}