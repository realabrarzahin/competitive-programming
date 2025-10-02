#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void col_conj(long n) {

  if (n == 1) {
    return;
  }

  if (n % 2) {
    cout << 3 * n + 1 << " ";
    col_conj(3 * n + 1);
  } else {
    cout << (n >> 1) << " ";
    col_conj(n >> 1);
  }
}

void solve() {

  int n;
  cin >> n;

  cout << n << " ";
  col_conj(n);
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
