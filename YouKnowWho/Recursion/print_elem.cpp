#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void even(int n, const vector<long> &a) {
  if (n == 0) {
    cout << a[0] << endl;
    return;
  }

  cout << a[n] << " ";
  return even(n - 2, a);
}

void solve() {

  int n;
  cin >> n;
  vector<long> a(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  if (n % 2)
    even(n - 1, a);
  else
    even(n - 2, a);
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
