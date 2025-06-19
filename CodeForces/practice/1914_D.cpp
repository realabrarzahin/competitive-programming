#include<bits/stdc++.h>

using namespace std;

vector<int> find_max(vector<int> &arr, int n){
	vector<pair<int, int>>	tmp(n);

	for(int i = 0; i < n; i++){
		tmp[i].first = arr[i];
		tmp[i].second = i;
	}

	sort(tmp.rbegin(), tmp.rend());
	
	vector<int> ans(n);
	for(int i = 0; i < 3; i++) ans[i] = tmp[i].second;

	return ans;
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
		
		vector<int> maxa = find_max(a, n);
		vector<int> maxb = find_max(b, n);
		vector<int> maxc = find_max(c, n);
		
		// for(int i = 0; i < n; i++) cout<<maxa[i]<<"\n";
		int max = 0;

		for(int i = 0; i < 3; i++){
			int a_temp = a[maxa[i]];

			for(int j = 0; j < 3; j++){
				int b_temp = b[maxb[j]];

				if(maxa[i] != maxb[j]){
					for(int k = 0; k < 3; k++){
						int c_temp = c[maxc[k]];

						if(maxc[k] != maxb[k]){
							int max_tmp = a_temp + b_temp + c_temp;

							if(max_tmp > max) max = max_tmp;
						}
					}
				}
			}
			
		}

		cout << max <<endl;
	}

	return 0;
}
