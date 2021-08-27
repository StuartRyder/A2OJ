# A2OJ
A2OJ-ladders

##Header 2

#include<bits/stdc++.h>
using namespace std;
 
#define ONLINE_JUDGE            freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fastio                    ios::sync_with_stdio(false);cin.tie(0);
#define ll                      long long
#define pii                     pair<int, int>
#define pli                     pair<ll, int>
#define pil                     pair<int, ll>
#define pll                     pair<ll, ll>
#define vi                      vector<int>
#define vll                     vector<ll>
#define vb                      vector<bool>
#define vd                      vector<double>
#define vs                      vector<string>
#define ff                      first
#define ss                      second
#define pb                      push_back
#define eb                      emplace_back
#define ppb                     pop_back
#define pf                      push_front
#define ppf                     pop_front
#define vpii                    vector<pii>
#define vpll                    vector<pll>
#define umap                    unordered_map
#define all(x)                  x.begin(),x.end()
#define clr(a,b)                memset(a,b,sizeof a)
#define fr(i, n)                for(ll i=0; i<n;++i)
#define fr1(i, n)               for(ll i=1; i<=n; ++i)
#define rfr(i, n)               for(ll i=n-1; i>=0; --i)
#define frc(i,a,b)		        for(ll i=a;i<b;i++)
#define precise(x)              cout<<fixed<<setprecision(x)
#define wh                      while
#define mp                      make_pair
#define le                      length()
#define endl                    "\n"
#define sf                      scanf    
#define pq                      priority_queue                
#define RemoveDuplicates(a)     a.resize(unique(all(a))-a.begin())
#define pr(x) 				    cerr<<"["<<#x<<": "<<x<<"] "
#define pr2(x,y) 				cerr<<"["<<#x<<" "<<#y<<": "<<x<<" "<<y<<"] "
#define PI 						3.14159265 

// for ( 1/(a^n) ) %m  [ MODULAR INVERSE ]
// modpow(modpow(a,n,mod),mod-2,mod)%mod)

bool ispalindrome(string s){
    if (s == string(s.rbegin(), s.rend())) {
    return true;
}
return false;
}
 
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}
 
ll lcm(ll a,ll b)
{ return (a*b)/__gcd(a,b); }

 int previousFibonacci(int n)
{
    double a = n / ((1 + sqrt(5)) / 2.0);
    return round(a);
}
 
ll modpow(ll x, ll y, ll p)  
{  
    ll res = 1;    
 
    x = x % p;
   
    if (x == 0) return 0;
 
    while (y > 0)  
    {  
       
        if (y & 1)  
            res = (res*x) % p;  
 
       
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
bool inside(ll x,ll y,ll n,ll m)
{
    return(x>=0&&x<n&&y>=0&&y<m);
}  
 
ll modfact(ll n, ll p)
{
    if (n >= p)
        return 0;
 
    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}
 
long long power(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = power(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
 
/* Created By Stuart Ryder aka Anurag Srivastava*/
//fast comment ctrl+k+c comment out ctrl+k+u prettier shift+alt+f




//////////////////////////////////////////// END ////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include<bits/stdc++.h>
#include<random>
using namespace std;
 
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define readInputFile freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define pb push_back
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ff first
#define ss second
#define mem(a, b) memset(a, (b), sizeof(a))
#define po pop_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<vector<ll>> vvll;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<int> vii;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pll> vpll;
typedef pair<int, int> pi;
typedef vector<pi> vpii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef set<ll> sll;
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
 
//debug template
void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
//  template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
//Print Template.
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second);
    cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""),
                __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
template <typename T>
void print(vector <T> v) {
    for (T i : v) cout << i << " ";
    cout << '\n';
}
 
template <typename T>
void print(vector <vector <T>>& v) {
    for (vector <T>& vv : v) {
        for (T& i : vv)
            cout << i << " ";
        cout << '\n';
    }
}
template <typename T>
void read(vector <T>& v) {for (T& i : v) cin >> i;}
 
template <typename T>
void read(T&& t) {cin >> t;}
 
template <typename T, typename... Args>
void read(T&& t, Args&&... args)
{
    cin >> t;
    read(forward<Args>(args)...);
}
 
template <typename T>
void print(T&& t) {cout << t << '\n';}
 
template <typename T, typename... Args>
void print(T&& t, Args&&... args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}
 
template<typename T>             vector<T>& operator--            (vector<T>& v){for (auto& i : v) --i;            return  v;}
template<typename T>             vector<T>& operator++            (vector<T>& v){for (auto& i : v) ++i;            return  v;}
template<typename T>             istream& operator>>(istream& is,  vector<T>& v){for (auto& i : v) is >> i;        return is;}
template<typename T>             ostream& operator<<(ostream& os,  vector<T>& v){for (auto& i : v) os << i << ' '; return os;}
 
 
bool isprime(ll n){
    if(n<=1){return false;}
    if(n<=3){return true;}
    if(n%2==0||n%3==0){return false;}
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0||n%(i+2)==0){return false;}
    }
    return true;
}
 
int lcm(int a, int b)
{
	return (a * b) / __gcd(a, b);
}
 
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a)% m;
        b >>= 1;
    }
    return res;
}
 
ll modInverse(ll n, ll mod){
    return binpow(n,mod-2,mod);
}
 
ll comb(ll n, ll r, ll p) {
    if (r == 0 or n == r) return 1;
    ll fac[n+1]; fac[0] = 1;
    for(ll i = 1; i <= n; i++){fac[i] = fac[i-1] * i; fac[i] %= p; }
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}
 
 
 
ll sumstring (string s){
	ll sum =0;
	for(ll i =0;i<s.size();i++){
		sum += (s[i] -'0');
	}
	return sum;
}
 
 
ll sumdigit (ll n){
	ll sum =0;
	while(n){
		ll rem = n%10;
		sum += rem;
		n/=10;
	}
	return sum;
}
 
 
ll toint(string s){
	ll num =0;
	for(ll i=0;i<s.size();i++){
		num = num* 10 + s[i] -'0';
	}
	return num;
}
 
 
sll divisors(ll n){
	sll s;
	for(ll i=1; i*i<=n;i++){
		if(n%i==0){
			s.insert(i);
			s.insert(n/i);
		}
	}
	return s;
}
 
 
vll primes; 
void seive(){
	vector<int> is_prime(1e6+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= 1e6; i++) {
	    if (is_prime[i]) {
	        for (int j = i * i; j <= 1e6; j += i)
	            is_prime[j] = false;
	    }
	}
	for(int i=2;i<=1e6;i++){
		if(is_prime[i])
			primes.pb(i);
	}
}
 
map<ll,ll> primeFactors(ll n)  
{  
	map<ll,ll> m;
    while (n % 2 == 0)  
    {  
        m[2]++;
        n = n/2;  
    }  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            m[i]++; 
            n = n/i;  
        }  
    }    
    if (n > 2)  
        m[n]++;  
    return m;
}
ll fact(ll n){
	ll res =1;
	for(ll i=1;i<=n;i++){
		res *=  i;
	}
	return res;
}
 
 
ll C(ll n,ll r){
	ll res =1;
	for(ll i=0;i<r;i++){
		res = res * (n-i) / (i+1);
	}
	return res;
}
 
 
ll ceil(ll n, ll k){
	ll ans = (n + k -1)/ k;
	return ans;
}
 
string tobinary(ll x){
	string a;
	while(x > 0){
		a += (x % 2) + '0';
		x /= 2;
	}
	return a;
}
ll todecimal(string x){
	ll sum = 0;
	ll n = x.size();
	ll j =0;
	for(ll i= n-1;i>=0;i--){
		if(x[i] == '1')
			sum += (1LL << j);
		j++;
	}
	return sum;
}
ll countbit(ll n){
	ll cnt = 0;
	while(n > 0){
		if(n &1) cnt++;
		n >>= 1;
	}
	return cnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll ipow(ll base, ll exp)
{
    ll result = 1;
    for (;;)
    {
        if (exp & 1)
            result= (result*base)%mod;
        exp >>= 1;
        if (!exp)
            break;
        base= (base*base)%mod;
    }
 
    return result;
}
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
ll fact(ll n)
{
    if (n >= mod)
        return 0;
 
    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % mod;
 
    return result;
}
ll fact1(ll n)
{   ll x=1;
    while(n>1)
    {
        x*=n;
        n--;
    }
    return x;
}
bool is_prime(ll n) {
    if (n == 1) {
        return false;
    }
    ll i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}
bool areRotations(string str1, string str2)
{
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length())
        return false;
 
   string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}
bool pow2 (ll x)
{
    return x && (!(x&(x-1)));
}
ll maxXorSum(ll n, ll k)
{
    if (k == 1)
        return n;
    ll res = 1;
    while (res <= n)
        res <<= 1;
 
    // Return res - 1 which denotes
    // a number with all bits set to 1
    return res - 1;
}
ll mcost(ll a[], ll n)
{
 
    ll y;
    if (n % 2 == 1)
        y = a[n / 2];
    else
        y = (a[n / 2] + a[(n - 2) / 2]) / 2;
 
    ll s = 0;
    for(ll i = 0; i < n; i++)
        s += abs(a[i] - y);
 
    return s;
}
ll largest_subarray(ll a[], ll n)
{
    unordered_map<ll, ll> index;
    ll ans = 0;
    for (ll i = 0, j = 0; i < n; i++) {
 
        j = max(index[a[i]], j);
        ans = max(ans, i - j + 1);
        index[a[i]] = i + 1;
    }
    return ans;
}
ll b[101],sz;
pair<ll,ll> adj[101];
 
void dfs(int s)
{
    b[s]=1;
    for(int i=1;i<=sz;i++)
    {    if(!b[i] && (adj[s].first==adj[i].first || adj[s].second==adj[i].second))
            dfs(i);
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
void per(int a[], int n)
{  ll d=0;
    sort(a, a + n);
  //  cout << "Possible permutations are:\n";
    do { ll s=0,x=1;
        f(i,0,n)
        {
            s+=a[i];
            if(s==0)
            {
                x=-1;
            }
        }
        if(x==1)
        {    cout<<"YES"<<endl;
        d=1;
            f(i,0,n)
           {
             cout<<a[i]<<" ";
           }cout<<endl;
          break;
        }
    } while (next_permutation(a, a + n));
    if(d==0)
    {
        cout<<"NO"<<endl;
    }
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
bool leftRotate(int a[], int d, int n)
{
 
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        int temp = a[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            a[j] = a[k];
            j = k;
        }
        a[j] = temp;
    }
    ll s=0,x=1;
    f(i,0,n)
    {
        s+=a[i];
        if(s==0)
        {
            x=0;
        }
    }
    if(x==1)
    {   cout<<"YES"<<endl;
        f(i,0,n)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
      return true;
    }
    return false;
 
}
ll rec(ll n,ll k)
{
    if(n==1)
    {
        return 1;
    }
    if (k==1)
    {
        return n;
    }
    return ((n+rec(n-1,k-1))%mod);
}
 
bool isPerfectSquare(ll x)
{
  if(sqrt(x)*sqrt(x)==x)
  {
      return true;
  }
  return false;
}
bool isSubSequence(string str1,string str2, int m, int n)
{
   int j = 0,x=0,d=0;
    if(str1[0]==str2[0])
    {
        for (int i=0; i<n&&j<m; i++)
       {
           if (str1[j] == str2[i])
            {
              j++;
 
            }
           else
            {   d=i;
                break;
            }
       }
       if(j==m)
       {
           return true;
       }
       ll p=9,v=0;
       for(int i=n-1;i>=d;i--)
        {  //  cout<<"l";
            if(v==10-j)
            {
                break;
            }
            if(str1[p]==str2[i])
            {
                p--;
                v++;
            }
 
            else
            {
                break;
            }
        }
       //cout<<j<<" "<<v<<" "<<d<<endl;
        if(v+j==10)
        {
            return true;
        }
        else
        {
            return false;
        }
 
 
    }
    else{
         size_t found = str2.find(str1);
        if (found != string::npos && str1[9]==str2[n-1])
         {
             return true;
         }
         else
         {
             return false;
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
void kFactors(int n, int k)
{
    // A vector to store all prime factors of n
    vector<int> P;
 
    // Insert all 2's in vector
    while (n%2 == 0)
    {
        P.push_back(2);
        n /= 2;
    }
 
    // n must be odd at this point
    // So we skip one element (i = i + 2)
    for (int i=3; i*i<=n; i=i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            P.push_back(i);
        }
    }
 
    // This is to handle when n > 2 and
    // n is prime
    if (n > 2)
        P.push_back(n);
 
    // If size(P) < k, k factors are not possible
    if (P.size() < k)
    {
        cout << "-1" << endl;
        return;
    }
 
    // printing first k-1 factors
    for (int i=0; i<k-1; i++)
        cout << P[i] << " ";
 
    // calculating and printing product of rest
    // of numbers
    int product = 1;
    for (int i=k-1; i<P.size(); i++)
        product = product*P[i];
    cout << product << endl;
}
ll fin(ll n)
{    ll x=0,y=0,z=0;
     for(ll i=2;i<=n;i++)
     {
        if(n%i==0 && x==0)
        {
            x=i;
            n/=i;
        }
        else if(n%i==0 && y==0)
        {
            y=i;
            n/=i;
            if(n!=y && n!=1 && x!=y && x!=n){z=n;
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
            return 0;}
            else
            {
                break;
            }
        }
 
     }
 
 
      cout<<"NO"<<endl;
     return 0;
}
bool sov(ll a[500][500],ll n,ll m)
{
	map<ll,vector<ll> > mp;
	f(i,0,n)
       {
         f(j,0,m)
         {
			mp[j-i].push_back(a[i][j]);
		}
	}
	for(auto i : mp)
	{
		f(j,1,i.second.size())
		{
			if(i.second[j]!=i.second[0])
			return false;
		}
	}
	return true;
}
bool findPartiion(ll arr[], ll n)
{
    int sum = 0;
    int i, j;
 
    for (i = 0; i < n; i++)
        sum += arr[i];
 
    if (sum % 2 != 0)
        return false;
 
    bool part[sum / 2 + 1][n + 1];
    for (i = 0; i <= n; i++)
        part[0][i] = true;
 
    for (i = 1; i <= sum / 2; i++)
        part[i][0] = false;
 
    for (i = 1; i <= sum / 2; i++) {
        for (j = 1; j <= n; j++) {
            part[i][j] = part[i][j - 1];
            if (i >= arr[j - 1])
                part[i][j] = part[i][j]
                             || part[i - arr[j - 1]][j - 1];
        }
    }
 
    return part[sum / 2][n];
}
ll CountPairs(ll arr[], ll n)
{
    sort(arr, arr + n);
    ll count = 0;
    ll l = 0, r = n - 1;
 
    while (l < r) {
 
        if (arr[l] + arr[r] > 0) {
 
            count += (r - l);
            r--;
        }
        else {
            l++;
        }
    }
    return count;
}
ll lcm(ll a, ll b)
   {
 
return a / __gcd(a, b) * b;
   }
ll rec2(ll n)
{
    if(n<=1)
    {
        return 1;
    }
    ll s=0;
    f(i,0,n)
    {
        s+=rec2(i)+rec2(n-i-1);
    }
    return s;
 
}
bool exist(ll n)
{
    for (int i=3; i<=sqrt(n); i+=2)
    {
        if (n%i == 0)
        {
 
            if (n/i == i)
                {
                    if(i%2==1)
                    {
                        return true;
                    }
                }
 
            else // Otherwise print both
                {
                    if(i%2==1 || (n/i)%2==1)
                    {
                        return true;
                    }
                }
        }
    }
    return false;
}
bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
ll factorial(ll n)
{
 
    return (n == 1 || n ==(ll) 0) ? (ll)1 : n * factorial(n - 1);
}
