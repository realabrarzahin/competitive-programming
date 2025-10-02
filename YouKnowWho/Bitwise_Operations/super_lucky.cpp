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

  while (true) {
    int cnt4 = 0;
    int cnt7 = 0;

    int num = n;
    bool lucky = true;

    while (num) {
      if (num % 10 == 4) {
        cnt4++;
        num /= 10;
      } else if (num % 10 == 7) {
        cnt7++;
        num /= 10;
      } else {
        lucky = false;
        break;
      }
    }

    if (lucky) {
      if (cnt4 == cnt7) {
        cout << n << endl;
        return;
      }
    }

    n++;
  }
}

int main() {
  fastIO();

  int T = 1;

  while (T--)
    solve();

  return 0;
}
