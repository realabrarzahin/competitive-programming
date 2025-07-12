#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);

        int ans;
        int af = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];

            if(!af) ans = 1;
            if(i >= 1 && abs(arr[i] - arr[i-1]) <= 1){
                ans = 0;
                af = 1;
            }
        }

        int as = is_sorted(arr.begin(), arr.end());
        int ds = is_sorted(arr.begin(), arr.end(), greater<int>());

        if((as || ds) && ans != 0) ans = -1;

        cout << ans << endl;
    }

    return 0;
}
