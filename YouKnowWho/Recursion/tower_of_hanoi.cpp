#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int hanoicnt(int n) {
  if (n == 1)
    return 1;

  return 1 + 2 * hanoicnt(n - 1);
}

void tower(int n, int start, int end) {

  if (n == 1) {
    cout << start << " " << end << endl;
    return;
  }

  tower(n - 1, start, 6 - (start + end));
  cout << start << " " << end << endl;
  tower(n - 1, 6 - (start + end), end);
}

void solve() {
  int n;
  cin >> n;

  int x = hanoicnt(n);
  cout << x << endl;

  tower(n, 1, 3);
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
