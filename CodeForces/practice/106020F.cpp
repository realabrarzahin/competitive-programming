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
  int n, k;
  cin >> n >> k;

  vector<pair<int, int>> odd;
  vector<pair<int, int>> even;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x % 2)
      odd.push_back({x, i});
    else
      even.push_back({x, i});
  }

  sort(odd.begin(), odd.end());
  sort(even.begin(), even.end());

  while (k--) {
    int x;
    cin >> x;

    if (x == 1) {
      if (odd.back().first >= even.back().first) {
        cout << odd.back().second + 1 << endl;
        odd.pop_back();
      } else {
        cout << even.back().second + 1 << endl;
        even.pop_back();
      }
    } else {
      cout << even.back().second + 1 << endl;
      even.pop_back();
    }

    int y;
    cin >> y;
    if (!y)
      break;

    cout.flush();
  }
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
