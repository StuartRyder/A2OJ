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
int check(int c[], int n)
{
    int count = 0;
    for (auto i = 0; i < n; i++)
    {
        if (c[i] == 0)
        {
            count++;
            break;
        }
    }
    if (count > 0)
        return 0;
    else
        return 1;
}

bool isPalRec(char str[], int s, int e)
{

    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return isPalRec(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(char str[])
{
    int n = strlen(str);
    if (n == 0)
        return true;

    return isPalRec(str, 0, n - 1);
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c[n];
        for (auto i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            c[i] = (int)s - 48;
        }

        int lastmove = 0;
        int move = 0;
        ll turn = 0;
        int bob = 0, alice = 0;
        //cout<<check(c,n)<<endl;

        while (!check(c, n))
        {
           // cout<<"turn "<<turn<<endl;
            char str[n];
            for (auto i = 0; i < n; i++)
                str[i] = (char)(c[i] + 48);

            if (isPalindrome(str))
                move = 1;
            else
                move = 0;

            // out(n,c);

            // for(auto i=0;i<n;i++)
            // cout<<str[i];
            // cout<<endl;

            //cout<<move<<" move "<<lastmove<<" lastmove"<<endl;

            if (lastmove == 0)
            {
                if (turn % 2 == 0)
                    alice++;
                else
                    bob++;

                int f = 0;
                if (n % 2 != 0 && c[(n / 2)+1] == 0)
                {
                    //cout<<(n / 2) <<endl;
                    c[(n / 2) ] = 1;
                    str[(n / 2)] = '1';
                    // if (isPalindrome(str))
                    //     f++;
                    // else
                    // {
                    //     str[(n / 2) + 1] = '0';
                    //     c[(n / 2) + 1] = 0;
                    // }
                }
                else
                {
                    //cout<<"andhab";
                    for (auto i = 0; i < n; i++)
                        if (c[i] == 0)
                        {
                            c[i] = 1;
                            break;
                        }
                    
                }
                lastmove = 1;
            }

                else
                {

                    if (move == 1)
                    {
                        //cout<<turn<<" "<<lastmove<<endl;
                        if (turn % 2 == 0)
                            alice++;
                        else
                            bob++;

                        int f = 0;
                        if (n % 2 != 0 && c[(n / 2) + 1] == 0)
                        {
                            c[(n / 2) + 1] = 1;
                            str[(n / 2) + 1] = '1';
                            if (isPalindrome(str))
                                f++;
                            else
                            {
                                str[(n / 2) + 1] = '0';
                                c[(n / 2) + 1] = 0;
                            }
                        }
                        if (f == 0)
                        {
                            for (auto i = 0; i < n; i++)
                                if (c[i] == 0)
                                {
                                    c[i] = 1;
                                    break;
                                }
                        }
                        lastmove = 1;
                    }

                    if (move == 0)
                    {
                        for (auto i = 0, j = n - 1; i < n; i++, j--)
                        {
                            c[j] = (int)str[i] - 48;
                        }
                        lastmove = 0;
                    }
                } //lastmove==1

                // cout<<alice<<" "<<bob<<" "<<turn<<endl;
                // cout<<"array";
                // out(n,c);
                // cout<<endl;
                turn++;
            }
            // cout<<"********************"<<endl<<endl;
            // cout<<check(c,n);
            // out(n,c);
            //cout<<alice<<bob<<endl;
            if (bob < alice)
                cout << "BOB" << endl;
            if (alice < bob)
                cout << "ALICE" << endl;
            if (bob == alice)
                cout << "DRAW" << endl;
        }
    }