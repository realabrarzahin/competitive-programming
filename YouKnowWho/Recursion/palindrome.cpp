#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

bool pald(long l, long r, const vector<long long> &a) {
  if (r - l == 0) {
    return true;
  }

  if (r - l == 1) {
    if (a[l] == a[r])
      return true;
    else
      return false;
  }

  if (a[l] == a[r])
    return pald(l + 1, r - 1, a);
  else
    return false;
}

void solve() {
  long n;
  cin >> n;

  vector<long long> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  bool pal = pald(0, n - 1, a);

  cout << (pal ? "YES" : "NO") << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
