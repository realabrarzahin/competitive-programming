#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

string an(int x, int n) {
  if (x == n) {
    return "sin(" + to_string(x) + ")";
  }

  return "sin(" + to_string(x) + ((x % 2) ? "-" : "+") + an(x + 1, n) + ")";
}

string sn(int x, int n) {

  if (n == 1)
    return "sin(1)+" + to_string(x);

  return "(" + sn(x + 1, n - 1) + ")" + an(1, n) + "+" + to_string(x);
}

void solve() {

  int n;
  cin >> n;

  string y = sn(1, n);

  cout << y << endl;
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
