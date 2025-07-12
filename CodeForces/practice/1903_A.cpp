#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;

		vector<int> a(n), ac(n);
		for(int i = 0; i < n; i++) cin >> a[i]; // N

		for(int i = 0; i < n; i++){
			ac[i] = a[i]; // N	
		}

		int is_sorted = 0;
		sort(a.begin(), a.end()); // NlogN
		
		int is_equal = 1;
		for(int i = 0; i < n; i++){ //N
			if(a[i] != ac[i]){
				is_equal = 0;
				break;
			} 
		}

		if(k == 1){
			if(is_equal) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}

	return 0;
}
