#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <iomanip>
#include <cassert>
#include <stack>
#include <queue>
#include <deque>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using namespace __gnu_pbds;

typedef long long ll;
typedef pair <int, int> pii;

// template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//  order_of_key (k) : Number of items strictly smaller than k .
//  find_by_order(k) : K-th element in a set (counting from zero).
#define sz(a) (int)a.size()
#define all(a) a.begin(), a.end()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define F first
#define S second
#define show(a) cerr << #a <<" -> "<< a <<"\n"
#define fo(a, b, c, d) for(int (a) = (b); (a) <= (c); (a) += (d))
#define foo(a, b, c ,d) for(int (a) = (b); (a) >= (c); (a) -= (d))
#define int ll

const int N = 2e5 + 5;
const int oo = 1e14 + 5;

int n[4], c[4], need[4], r;
string s;

bool check (int num) {
	int sum = 0;
	fo (i, 1, 3, 1) {
		sum += max(0ll, num * need[i] - n[i]) * c[i];
	}
	return (sum <= r);
}

void solve() {
	cin >> s;
	fo (i, 1, 3, 1) cin >> n[i];
	fo (i, 1, 3, 1) cin >> c[i];
	cin >> r;
	fo (i, 0, sz(s)-1, 1) {
		if (s[i] == 'B') ++need[1];
		if (s[i] == 'S') ++need[2];
		if (s[i] == 'C') ++need[3];
	}
	int l = 0, r = oo;
	while (l < r) {
		int mid = (l + r + 1) / 2;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	cout << l;
}

 main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1;
	while (tt --) {
		solve();
	}
	return 0;
}
