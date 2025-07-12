#include<bits/stdc++.h>

using namespace std;

int main(){
   
    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        vector<int> arr(n);

        for(auto& x: arr) cin >> x;

        long long ans = 0;
        
        for(int r = 0; r < n; r++){
            for(int m = 0; m < r; m++){
                int x = max(2 * arr[r], arr[n - 1]) - arr[r] - arr[m];
                int k = upper_bound(arr.begin(), arr.begin() + m, x) - arr.begin();

                ans = ans + (m - k);
            }
        }

        cout << ans << '\n';

    }

    return 0;
}
