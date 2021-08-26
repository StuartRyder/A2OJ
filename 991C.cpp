#include<iostream>
#include <iterator>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <limits>
#include <cstdint>
#include <stdint.h>
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
#define   ull            unsigned long long
#define   ret             return 
#define   ll              long long int
#define   in(n,arr)       for(int i=0 ; i<n ; i++) cin>>arr[i]
#define   out(n,arr)      for(int i=0 ; i<n ; i++) cout<<arr[i]<<" "; cout<<endl

ll value=0;

int cal(ll k,ll x1){
   ll f=0;
  while (x1>0){
        if(x1>=k && x1>=10)
        {
        x1=(x1-k)-((x1-k)/10);
        f++;
        //cout<<x1<<" "<<f<<endl;
        }
        else{
         value=x1+k*f;   
        x1=0;
        return 0;
        }
  }
    if(x1==0)
    value=x1+k*f; 
    else
    value=k*f;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll k=1;
    cin>>n;
    ll high=n;
    ll low=1;
    ll mid;
    while(low<=high){
    mid=(high+low)/2;
    int c=cal(mid,n);
    //long double Q=ceil(n/2);
    if(value >= ceil((long double)n/2)){
      //  cout<<value<<" "<<ceil(n/2)<<" "<<low<<" "<<high<<endl;
        k=mid;
        high=mid-1;
    }

    else 
    low=mid+1;
    }
    cout <<k<<endl;
}
