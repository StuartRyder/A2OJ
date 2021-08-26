#include <bits/stdc++.h>
#include <iostream>
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
#define pb push_back
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define vl vector<ll>
#define vi vector<int>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdarg.h>

#include <string>
#include <sstream>

#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>

#include<limits.h>

using namespace std;
//52079TS

#pragma comment(linker, "/STACK:16777216")

//TYPE DEFINITIONS
#define llong long long
#define ulong unsigned long long
#define ushort unsigned short
#define uint unsigned int

typedef pair<short, short> PSS;
typedef pair<int, int> PII;
typedef pair<long, long> PLL;
typedef pair<long, short> PLS;

typedef vector<int>::iterator int_iter;
typedef vector<llong>::iterator llong_iter;
typedef vector<ulong>::iterator ulong_iter;

//FASTCODE MACROS DEFINITIONS
#define REP(i,n) for(i=0; i<n; ++i)
#define REP2(i,from, to) for(i=from; i<to; ++i)

//BASIC MATH FUNCTIONS
const double EPS = 1e-7;

double iabs(const double a){
    return (a<-EPS) ? -a : a;
}

double imin(const double a, const double b){
    return (a-b > EPS) ? b : a;
}

double imax(const double a, const double b) {
    return (a-b > EPS) ? a : b;
}

template<class I>
I iabs(const I a) {
    return (a<0) ? -a : a;
}

template<class I>
I imin(const I a, const I b) {
    return (a<b) ? a : b;
}

template<class I>
I imax(const I a, const I b) {
    return (a<b) ? b : a;
}

template <class I>
inline I mod_pow(const I& x, const llong p, const I& m) {
    if(p==0)return 1;
    I mult = (p&1) ? x : 1;
    I t = mod_pow(x, p/2, m) % m;
    return (((mult * t) % m) * t) % m;
}

template <class T>
inline T ipow(const T& x, const llong p) {
    if(p==0)return 1;
    T mult = (p&1) ? x : 1;
    T h = ipow(x, p/2);
    return h*h*mult;
}

ulong gcd(ulong a, ulong b) {
    if(a == 0) return b;
    return gcd(b % a, a);
}

template<class T>
T next_power_of_two(T v) {
    if(v<0)return 0;
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v |= v >> 32;
    v++;
    return v;
}

string bin(unsigned int i) {
    string res = "";
    while(i!=0){
        res += ('0'+ (i%2));
        i=i/2;
    }
    return string(res.rbegin(), res.rend());
}

//Disjoint Set Union data structure
template<int SIZE>
class DSU {
public:
    int parent [SIZE]; // parent node for a current node
    int rank [SIZE]; // number of nodes in current set
    int count; // number of disjoint sets

    void clear() {
        for(int i=0; i<SIZE; i++) {
            this->parent[i] = -1;
            this->rank[i] = 0;
        }
        this->count = 0;
    }

    DSU() {
        this->clear();
    }

    void make(int x) {
        this->parent[x] = x;
        this->rank[x] = 1;
        this->count++;
    }

    bool in_a_set(int x) {
        return this->parent[x] != -1;
    }

    int find(int x) {
        if(x == this->parent[x])return x;
        return this->parent[x] =  find(this->parent[x]);
    }

    void combine(int x, int y) {
        x = this->find(x);
        y = this->find(y);
        if(x!=y){
            if(this->rank[x] > this->rank[y])
                this->parent[x] = y;
            else this->parent[y] = x;
        }
        this->count--;
    }
};

class BigInt {
public:
    const static unsigned int N = 1000;
    const static unsigned int base = 10;
    unsigned int len;
    short sign;
    unsigned int digits[N];

    BigInt(const BigInt& bi) {
        this->len = bi.len;
        this->sign = bi.sign;
        for(unsigned int i=0; i<this->len; ++i) (*this)[i]=bi[i];
    }

    BigInt(llong n) {
        this->len = 0;
        this->sign = (n>=0) ? 1 : -1;
        this->digits[0]=0;
        while(n) {
            this->digits[this->len] = n % this->base;
            n /= this->base;
            this->len++;
        }
        if(this->len==0)this->len = 1;
    }

    BigInt(string s) {
        this->sign = (s[0] == '-') ? 1 : -1;
        this->digits[0]=0;
        if(s[0] == '-')s = s.substr(1, s.length() -1);
        this->len = s.length();
        for(unsigned int i=0; i<this->len; i++)
            (*this)[i] = s[this->len - i - 1] - '0';
    }

    string toString() const{
        //return representation of BigInt
        //in this-base -based number system
        stringstream ss;
        for(int i=this->len-1; i>=0; --i) ss << (*this)[i];
        return ss.str();
    }

    unsigned int& operator[](const unsigned int i){
        //return the reference to
        //i'th digit
        return digits[i];
    }

    unsigned int operator[](const unsigned int i) const{
        //get the i'th digit of BigInt
        if(i<this->len)return this->digits[i];
        return 0;
    }

    bool iszero() const {
        if(this->len <= 1 && this->digits[0] == 0) return true;
        return false;
    }

    BigInt& operator= (const BigInt& rval) {
        if(this != &rval) {
            this->len = rval.len;
            this->sign = rval.sign;
            for(unsigned int i=0; i<this->len; ++i)
                (*this)[i] = rval[i];
        }
        return *this;
    }

    BigInt operator+ (const BigInt& rhs) const{
        BigInt s(0);
        unsigned long long r = 0, d, i;
        for(i=0; i<max(this->len, rhs.len); i++) {
            d = (*this)[i] + rhs[i] + r;
            r = d / this->base;
            s[i] = d % this->base;
        }
        s.len = max(this->len, rhs.len);
        if(r)
            s[s.len++] = r;
        return s;
    }

    BigInt operator+ (unsigned long long rhs) const{
        BigInt s(*this);
        unsigned long long r = 0, d, i = 0;
        while(rhs!=0 || r!=0) {
            d = s[i] + (rhs % s.base) + r;
            rhs /= s.base;
            r = d / s.base;
            s[i] = d % s.base;
            i++;
        }
        if(i>s.len) s.len=i;
        return s;
    }

    BigInt operator* (unsigned long long rhs) const{
        //Multiply on a digit (rhs < this->base)
        if(rhs==0) return BigInt(0);

        BigInt s(*this);
        unsigned long long r = 0, d, i;
        for(i=0; i<s.len; ++i) {
            d = s[i] * rhs + r;
            r = d / this->base;
            s[i] =d % this->base;
        }
        while(r) s[s.len++] = r % this->base, r/=this->base;
        return s;
    }

    BigInt operator* (const BigInt& rhs) const {
        BigInt s(0);
        if(rhs.iszero())return s;
        unsigned long long r, d, i, j, k;
        for(i=0; i < this->N; i++) s[i]=0;
        for(i=0; i < this->len; i++) {
            r = 0;
            for(j=0, k=i; j<rhs.len; j++, k++) {
                d = (*this)[i] * rhs[j] + r + s[k];
                r = d / this->base;
                s[k] = d % this->base;
            }
            while(r)s[k++] = r % this->base, r /= this->base;
            if(k>s.len) s.len = k;
        }
        while(s.len>1 && s[s.len-1]==0)s.len--;
        return s;
    }

    unsigned int operator% (unsigned int rhs) {
        BigInt t(*this);
        unsigned long long pow = 1;
        unsigned long long mod = 0;
        for(unsigned int i=0; i<this->len && pow!=0; i++) {
            mod = (((*this)[i] % rhs) * pow + mod) % rhs;
            pow = (pow * this->base) % rhs;
        }
        return mod;
    }
};

vector<llong> genprimes(const int n) {
    vector<llong> res;
    res.push_back(2);
    llong m, t, j;
    for(int i=3; i<=n; i++) {
        j=0;
        m = res.size();
        t = (llong)sqrt(i*1.0)+1;
        while(j<m && res[j]<t && i%res[j]!=0) j++;
        if(j==m || res[j]>=t)res.push_back(i);
    }
    return res;
}

const llong INF = 1000*1000*1000;
const llong N = 100+10;
llong n, m, k, i, j, q, t;

int a[N][N], b[N][N], c[N];

int main(int argc, char* argv[]) {
    bool nolangs = true;
    cin >> n >> m;
    for(i=1; i<=n; ++i)
        for(j=1; j<=m; ++j)
            a[i][j] = 0;

    for(i=1; i<=n; ++i) {
        cin >> k;
        for(j=0; j<k; ++j) {
            nolangs = false;
            cin >> t;
            a[i][t] = 1;
        }
    }

    if(nolangs) {
        cout << n << endl;
        return 0;
    }

    for(t=1; t<=m; ++t)
        for(i=1; i<=n; ++i)
            for(j=i+1; j<=n; ++j)
                if(a[i][t]==1 && a[j][t]==1)
                    b[i][j] = 1, b[j][i] = 1;

    for(i=1; i<=n; ++i) c[i]=0;
    int comps = 0;
    for(i=1; i<=n; ++i) if(c[i]==0) {
        comps++;
        c[i]=1;
        queue<int> q;
        q.push(i);
        while(!q.empty()) {
            int v = q.front();
            q.pop();
            for(j=1; j<=n; ++j)
                if(b[v][j]==1 && c[j]==0) {
                    c[j]=1;
                    q.push(j);
                }
        }
    }
    cout << comps - 1 << endl;
    return 0;
}
