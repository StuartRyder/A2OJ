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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int x3,y3,x4,y4;
    if(x1==x2){
        y3=min(y1,y2);
        y4=max(y2,y1);
        x3=x1+abs(y2-y1);
        x4=x1+abs(y2-y1);
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        //cout<<"a"<<endl;
        return;
    }
    else if(y1==y2){
        x3=min(x1,x2);
        x4=max(x2,x1);
        y3=y1+abs(x2-x1);
        y4=y1+abs(x2-x1);
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        //cout<<"b"<<endl;
        return;
    }
    else{
        x4=x2;
        x3=x1;
        y3=y2;
        y4=y1;
        ll d1=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        if(d1==2*((x2-x1)*(x2-x1))){
            if((x3*x3+y3*y3)<(x4*x4+y4*y4))
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
            else
            cout<<x4<<" "<<y4<<" "<<x3<<" "<<y3<<endl;
        }
        else
        cout<<-1<<endl;
        //cout<<"c"<<endl;
        return;
    }
}
int main(){
    fastio;
    compute();
}