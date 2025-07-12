#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> arr(n);

    for(auto& x: arr) cin >> x;

    int x; cin >> x;
    int i = n / 2;

    while(arr[i] != x){
        if(arr[i] > x){
            i = (i - 0) / 2;
        } 
        else{
            i = i + ((n - 1) - i) / 2;
        }
    }

    cout << i << endl; 

    return 0;
}
