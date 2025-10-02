#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int sum(int n, vector<int> &a) {
  if (n == 0)
    return a[0];

  return a[n] + sum(n - 1, a);
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  int x = sum(n - 1, a);
  cout << x << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  for (int k = 1; k <= t; k++) {
    cout << "Case " << k << ": ";
    solve();
  }

  return 0;
}
