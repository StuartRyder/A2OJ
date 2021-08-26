#include<iostream>
#include <iterator>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin>>T;
    while (T--){
        ll n ;cin>>n;
        vector <ll> A(n ,-1);
        vector <ll> B(n , -1);
        vector <ll>::iterator it;
        vector <ll>::iterator x;
        ll min=-1;
        ll minV=-1;
        for(ll i=0; i<n ;i++)
        cin>>A[i];
        for(it =A.begin() ; it<A.end(); it++){
            x=std::find(it , A.end() ,*it);
            if(x!=A.end()){
            B[it-A.begin()]=x-it;
            if(min==-1){min=B[it-A.begin()];minV=*it;}
            else
            {if(min>B[it-A.begin()]){
                min=B[it-A.begin()];minV=*it} 
                }
            }
            else{
                B[it-A.begin()]=0;
            }
        }
        ll c=0;
        for(it=B.begin();it<B.end();it++){
            if(min==*it && )
        }

    }
}
