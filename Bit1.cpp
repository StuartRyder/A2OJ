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
#define   MOD             1000000007
/* Created By Stuart Ryder aka Anurag Srivastava*/
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f
// string remove_leading(string const & str, T_CHAR c)
// {
//     auto end = str.end();

//     for (auto i = str.begin(); i != end; ++i) {
//         if (*i != c) {
//             return string(i, end);
//         }
//     }

//     // All characters were leading or the string is empty.
//     return string();
// }

// int  reverseBits(int  num)
// {
//     int  count = sizeof(num) * 8 - 1;
//     int  reverse_num = num;

//     num >>= 1;
//     while(num)
//     {
//        reverse_num <<= 1;
//        reverse_num |= num & 1;
//        num >>= 1;
//        count--;
//     }
//     reverse_num <<= count;
//     return reverse_num;
// }
void bin(ll n)
{
  ll i;
  cout << "0";
  for (i = 1 << 30; i > 0; i = i / 2)
  {
    if ((n & i) != 0)
    {
      cout << "1";
    }
    else
    {
      cout << "0";
    }
  }
}

ll countBits(ll n)
{
  ll count = 0;
  while (n)
  {
    count++;
    n >>= 1;
  }
  return count;
}
// unsigned short int nextPowerOf2(unsigned short int n)
// {
//     unsigned short int count = 0;

//     // First n in the below condition
//     // is for the case where n is 0
//     if (n && !(n & (n - 1)))
//         return n;

//     while( n != 0)
//     {
//         n >>= 1;
//         count += 1;
//     }

//     return 1 << count;
// }
void solve(){
      ll L , R;
    cin>>L>>R;
    ll Ans=0;
    ll i=L;

    if(L==R){
      cout<<L<<endl;
      return;
    }

    while(i<=R){
      ll j=L+1;
      ll temp=L;
      while(j<=i){
      temp &=j;
      j++;
      }
      Ans =(Ans+temp)%MOD;
      i++;
  }
  cout<<Ans<<endl;
  return ;
}
int main()
{

  fastio;
  #ifndef ONLINE_JUDGE
      freopen("in", "r", stdin);
      freopen("out", "w", stdout);
  #endif
  ll T;
  cin>>T;
  while(T--){
    solve();
  }
}
