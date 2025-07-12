#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> arr(n);

    for(auto& x: arr) cin >> x;

    int k = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

    cout << k;

}
