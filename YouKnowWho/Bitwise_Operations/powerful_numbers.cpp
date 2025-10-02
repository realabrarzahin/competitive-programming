#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using umll = unordered_map<int, int>;

void fastIO() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  long n;
  cin >> n;

  set<long> st;

  long prev = 1;
  for (int i = 1;; i++) {
    if (prev > n)
      break;
    prev = prev * i;
    st.insert(prev);
  }

  for (int i = 0;; i++) {

    if ((1L << i) > n)
      break;
    st.insert(1L << i);
  }

  vector<long> a(st.size());

  long k = 0;
  for (auto &x : st) {
    a[k] = x;
    k++;
  }

  long ans = 1000000000000;
  for (unsigned long mask = 1; mask < ((1L << a.size()) - 1); mask++) {
    long sum = 0;
    long ecnt = __builtin_popcount(mask);

    for (long i = 0; i < a.size(); i++) {
      if ((mask >> i) & 1)
        sum += a[i];
    }

    if (sum == n)
      ans = min(ans, ecnt);
  }

  cout << ans << endl;
}

int main() {
  fastIO();

  int T = 1;
  cin >> T;

  while (T--)
    solve();

  return 0;
}
