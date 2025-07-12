#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; 
  cin >> t;

  while (t--) {
    int n; 
    cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> sr(n); 
    for (int i = 0; i < n; i++) sr[i] = arr[i];
    sort(sr.rbegin(), sr.rend());

    int count = 0;
    int max = sr[0];

    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        if (i != j) {
          int sum = arr[i] + arr[j];
          for (int k = i; k < n; k++) {
            if (k != i && k != j) {
              if (sum > arr[k] && sum > max) count++;
            }
          }
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}

