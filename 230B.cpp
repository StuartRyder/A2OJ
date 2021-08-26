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
ll power(ll a, unsigned ll n, ll p)
{
    ll res = 1;      // Initialize result
    a = a % p;  // Update 'a' if 'a' >= p
 
    while (n > 0)
    {
        if (n & 1)
            res = (res*a) % p;
 
        n = n>>1; // n = n/2
        a = (a*a) % p;
    }
    return res;
}
 
ll gcd(ll a, ll b)
{
    if(a < b)
        return gcd(b, a);
    else if(a%b == 0)
        return b;
    else return gcd(b, a%b); 
}
 
bool isPrime(unsigned ll n, ll k)
{
   if (n <= 1 || n == 4)  return false;
   if (n <= 3) return true;
 
   while (k>0)
   {
       ll a = 2 + rand()%(n-4); 
       if (gcd(n, a) != 1)
          return false;
       if (power(a, n-1, n) != 1)
          return false;
 
       k--;
    }
 
    return true;
}
void compute(){
    ll n;
    cin>>n;
    vl a(n);
    in(n,a);
    for(auto  i=0;i<n;i++){
        ll t=sqrt(a[i]);
        if(t*t!=a[i])
        {
            cout<<"NO"<<endl;
            continue;
            }
        else{
            isPrime(t, 10)?  cout << "YES"<<endl : cout << "NO"<<endl;
        }
    }
}
int main(){
    fastio;
    compute();
}