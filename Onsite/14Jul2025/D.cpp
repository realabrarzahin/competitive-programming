#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umll = unordered_map<int, int>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;  // Common modulus
const int INF = 1e9 + 5;  // Integer infinity
const ll LINF = 1e18 + 5; // Long long infinity
const int N = 2e5 + 5;    // Adjust according to problem size

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  int n;
  cin >> n;

  vector<pair<long, long>> a(n);

  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    a[i] = {x, i};
  }

  sort(a.begin(), a.end());
  

  ll med = n / 2 - 1;



  vector<pair<long, long>> ans(n);



  for(int i = 0; i < n; i++){
    if(med < i) {
      ans[i].ff = a[i].ss;
      ans[i].ss = a[med].ff;
    }else{
      ans[i].ff = a[i].ss;
      ans[i].ss = a[med + 1].ff;
    }
  }

  sort(ans.begin(), ans.end());
  

  for(int i = 0; i < n; i++){
    cout << ans[i].ss << endl;
  }
  

}

int main() {
  fastIO();
  int T;
  T = 1; // Comment this line if single test case
  while (T--)
    solve();
  return 0;
}
