#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int mx = arr[n-1];
        int ans = 0;
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){

                if(arr[i] + arr[j] > mx){
                    int l = (n - 1) - j;
                    ans +=  ((l * (l + 1)) / 2);
                    break;
                }
                else{

                    for(int k = j + 1; k < n; k++){

                        int isa = (arr[i] + arr[j] > arr[k]);

                        if(isa){
                            if(arr[i] + arr[j] + arr[k] > mx) ans++;
                        }else{
                            break;
                        }
                    }

                }
            }
        }

        cout << ans << endl;

    }

    return 0;
}
