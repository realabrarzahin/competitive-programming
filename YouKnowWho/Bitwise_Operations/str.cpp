#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {

  i64 target;

  cin >> target;

  if (target >= 0 && target <= 9) {
    cout << target << endl;
    return;
  }

  i64 pow = 1;
  i64 i = 0;

  while (true) {
    i64 x = 9 * pow * (i + 1);
    pow *= 10;

    if (target - x >= 0) {
      target = target - x;
      i++;
    } else {
      break;
    }
  }

  i64 lnum = 0;
  i64 div = i + 1;

  while (i--) {
    lnum += 9;
    lnum *= 10;
  }

  lnum /= 10;

  i64 concern;
  if (target % div)
    concern = lnum + target / div + 1;
  else
    concern = lnum + target / div;

  i64 mod = target % div;
  string num = to_string(concern);

  if (mod) {
    cout << num[mod - 1] << endl;
  } else {
    cout << num.back() << endl;
  }
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
