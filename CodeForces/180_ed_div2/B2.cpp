#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        int ans;

        if (n == 2) {
            cin >> arr[0] >> arr[1];

            if (abs(arr[0] - arr[1]) <= 1) ans = 0;
            else ans = -1;
        }
        else {
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }

        int as = 0;
        int ds = 0;
        if(is_sorted(arr.begin(), arr.end())) as = 1;
        if(is_sorted(arr.begin(), arr.end(), greater<int>())) ds = 1;

        if(n != 2){
            for(int i = 0; i < n; i++){
                if (i >= 1 && (abs(arr[i-1] - arr[i]) <= 1)) {
                    ans = 0;
                    break;
                }
                else ans = 1;
            }

        }

        if((as || ds) && ans == 1){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }

    }

    return 0;
}

