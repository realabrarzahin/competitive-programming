#include<bits/stdc++.h>

using namespace std;

vector<int> find_maxi(vector<int> &arr, int n){
	vector<pair<int, int>> temp(n);

	for(int i = 0; i < n; i++){
		temp[i].first = arr[i];
		temp[i].second = i;
	}
	
	sort(temp.rbegin(), temp.rend());

	vector<int> indices(3);
	for(int i = 0; i < 3; i++) indices[i] = temp[i].second;

	return indices;
}

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		vector<int> a(n);
		vector<int> b(n);
		vector<int> c(n);

		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		for(int i = 0; i < n; i++) cin >> c[i];

		vector<int> ai = find_maxi(a, n);
		vector<int> bj = find_maxi(b, n);
		vector<int> ck = find_maxi(c, n);
		
		// for(int i = 0; i < 3; i++) cout << ai[i] << " ";
		// cout << "\n";
		// for(int i = 0; i < 3; i++) cout << bj[i] << " ";
		// cout << "\n";
		// for(int i = 0; i < 3; i++) cout << ck[i] << " ";
		// cout << "\n";
		
		int ans = 0;
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				for(int k = 0; k < 3; k++){
					if (ai[i] == bj[j] or bj[j] == ck[k] or ck[k] == ai[i]) continue;
					else ans = max(ans, a[ai[i]] + b[bj[j]] + c[ck[k]]);
					
				}
			}
		}

		cout << ans << "\n";
	}

	return 0;
}
