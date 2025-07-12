#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    ll a, b; cin >> a >> b;

    ll x = a;
    ll y = b;

    vector<ll> ar;
    int af = 1;

    ar.push_back(y);
    
    
    if(x == y){
        af = 0;
        cout << "YES" << endl;
        cout << 2 << endl;
        cout << x << " " << y << " ";
    }
    else{
        while(true){
            if(b > a){
                if(b % 2){
                    if(b % 10 == 1){
                        b = (b - 1) / 10;
                        ar.push_back(b);
                    }
                    else{
                        af = 0;
            cout << "NO" << endl;
                        break;
                    }
                }
                else{
                    b = b / 2;
                    ar.push_back(b);
                }
            }
            else if(b == a){break;}
            else { af = 0; cout << "NO" << endl; break;}
        }
    }

    if(af){
        cout << "YES" << endl;
        cout << ar.size() << endl;

        for(int i = ar.size() -1 ; i >= 0; i--) cout << ar[i] << " ";
    }
    


    
    
    return 0;
}
