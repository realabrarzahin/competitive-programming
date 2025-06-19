#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t; // O(100)
	while(t--){ // O(t*f(n))

		int n; cin >> n; // O(100)

		vector<long long> a(n); // O(n)
		for(int i = 0; i < n; i++) cin >> a[i]; //O(n)

		long long ans;

		for(int i = 1; i < 60; i++){  // O(60)
			set<long long> r;

			for(int j = 0; j < n; j++){ // O(n)
				long long div = 1LL << i;
				r.insert(a[j] % div);
			}

			if(r.size() == 2) {
				ans = 1LL << i;
				break;
			}
		}

		cout << ans << endl;
	}
	return 0;
}

// Time Complexity is O(t*N)
// Space Complexity is O(N)
