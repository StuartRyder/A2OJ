#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int i = 0,j = n-1,ct = 0;
    while(i<n and s[i]!='*')++i;
    if(i == n){
        cout<<0<<"\n";
        return;
    }
    ++ct;
    while(j>i and s[j]!='*')--j;
    if(j == i){
    cout<<1<<"\n";
        return;
    }
    ++ct;
    while(j-i>k){
        i+=k;
        if(s[i] == '.'){
            while(i>=0 and s[i]=='.')--i;
        }
        ++ct;
    }
    cout<<ct<<"\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}