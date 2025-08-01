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
  ll n;
  ll h;
  cin >> n >> h;

  vll a(n), b(n);

  ll mxa = 0;
  ll mxb = 0;

  for (int i = 0; i < n; i++) {

    cin >> a[i] >> b[i];

    mxa = max(mxa, a[i]);
    mxb = max(mxb, b[i]);
  }

  if ((h - mxb) <= 0) {
    cout << 1 << endl;

    return;
  }

  sort(b.rbegin(), b.rend());

  ll count = 0;

  ll i = 0;
  while (true) {
    if (b[i] >= mxa) {
      h -= b[i];
      count++;

      if (h <= 0) {
        cout << count << endl;
        return;
      }
    } else
      break;

    i++;
  }

  if (h % mxa)
    count += (h / mxa) + 1;
  else
    count += (h / mxa);

  cout << count << endl;
}

int main() {
  fastIO();
  int T;
  T = 1;

  while (T--)
    solve();
  return 0;
}
