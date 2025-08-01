#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll n, y, a, b;
    cin >> n;

    ll arr[n];
    ll pref[n];

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    y = accumulate(arr, arr + n, 0ll);

    ll sum = 0;
    for (int i = 0; i < n; i++) {
      sum = sum + arr[i];
      pref[i] = sum;
    }

    a = max(accumulate(arr, arr + n - 1, 0ll),
            accumulate(arr + 1, arr + n, 0ll));
    for (int i = 0; i < n; i++) {
      if (i == 0)
        continue;
      else if (i == n - 1)
        continue;
      else if (arr[i] < 0) {
        b = max(pref[i - 1], pref[n - 1] - pref[i]);
        a = max(a, b);
      }
    }

    cout << (y > a ? "YES\n" : "NO\n");
  }
}
