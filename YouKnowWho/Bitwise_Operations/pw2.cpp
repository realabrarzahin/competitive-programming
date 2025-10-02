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
  long long n;
  cin >> n;

  vector<long long> fact(15);
  fact[0] = 1;

  long long sz = fact.size();

  for (long long i = 2; i < 16; i++) {
    fact[i - 1] = fact[i - 2] * i;
  }

  long long cnt_nsbit = __builtin_popcountll(n);
  long long ans = cnt_nsbit;

  for (long long mask = 1; mask < ((1LL << sz)); mask++) {

    long long sum = 0;
    long long match = 0;
    bool mismatch = false;

    for (long long i = 0; i < sz; i++) {
      if ((mask >> i) & 1LL)
        sum += fact[i];
    }

    if (sum > n)
      continue;

    long long cnt_msbit = __builtin_popcountll(mask);

    for (long long i = 0; i < (sizeof(long long) * 8); i++) {

      if (((sum >> i) & 1LL) & ((n >> i) & 1LL))
        match++;
      else if (!((n >> i) & 1LL) & ((sum >> i) & 1LL)) {
        mismatch = true;
        break;
      }
    }

    if (!mismatch) {
      ans = min(ans, (cnt_nsbit - match) + (cnt_msbit));
    }
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
