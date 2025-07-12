#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);

        int ans = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            
            if(n == 1){
                ans = max(a[0], 2 * (x - a[0]));
            }
            else if(i){
                if(i == (n - 1)){
                    ans = max(ans, max(a[i] - a[i - 1], 2 * (x - a[i])));
                }
                else ans = max(ans, a[i] - a[i - 1]);
            }
            else ans = a[i];
        }

        cout << ans << endl;

    }

    return 0;
}
