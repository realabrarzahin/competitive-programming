#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) cin >> arr[i];

        int l, r;
        int ans = 0;

        int max = arr[n - 1];

        for(r = n - 2; r > 0; r--){
            for(l = 0; l < r; l++){
                bool cd = (arr[l] + arr[r] > arr[r + 1]) && (arr[l] + arr[r] + arr[r + 1] > max);
                if(cd){
                    ans+=(r - l);
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
