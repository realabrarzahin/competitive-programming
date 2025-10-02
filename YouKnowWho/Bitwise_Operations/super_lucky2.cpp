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

  long long mn = 4444477777;

  for (long long i = 2; i <= 10; i += 2) {
    for (long long j = 0; j < (1 << i); j++) {
      long long sum = 0;

      if (__builtin_popcountll(j) == (i >> 1)) {
        for (long long k = 0; k < i; k++) {
          if ((j >> k) & 1L) {
            sum += 4;
            sum *= 10;
          } else {
            sum += 7;
            sum *= 10;
          }
        }

        if (sum / 10 >= n) {
          mn = min((sum / 10), mn);
        }
      }
    }
  }

  cout << mn << endl;
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
