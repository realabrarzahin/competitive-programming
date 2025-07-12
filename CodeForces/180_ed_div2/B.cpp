#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> arr(n);

		int ans = 0;
		bool af = 0;

		if(n == 2){
			cin >> arr[0] >> arr[1];
			if (arr[0] == arr[1]) ans = 0;
			else ans = -1;
			af = 1;
		}else{
			for(int i = 0; i < n; i++){

				cin >> arr[i];

				if(i){
					if(abs(arr[i] - arr[i-1]) <= 1 ) {
						ans = 0;	
						af = 1;
					}
				}

			}
		}
		
		if(af) cout << ans << endl;	
		else{
			vector<pair<int,int>> sr(n);
			for(int i = 0; i < n; i++){
				sr[i].first = arr[i];
				sr[i].second = i;
			}

			sort(sr.begin(), sr.end());


			// for(int i = 0; i < n; i++){
			// 	cout << sr[i].first<< endl;
			// 	cout << sr[i].second << endl;
			// }


			int mx = sr[n-1].first;
			int mxs = sr[n-2].first;
			int mn = sr[0].first;
			int mns = sr[0+1].first;

			int mxp = sr[n-1].second;
			int mxsp = sr[n-2].second;
			int mnp = sr[0].second;
			int mnsp = sr[0+1].second;

			cout << mx <<" "<< mxp << endl;
			cout << mxs <<" "<< mxsp << endl;
			cout << mn <<" "<< mnp << endl;
			cout << mns <<" "<< mnsp << endl;

			if(mx - mxs <= 1) cout << abs(mxp - mxsp) - 1 << endl;
			else if(mns - mn <= 1) cout << abs(mnp - mnsp) - 1<< endl;
			else cout << -1 << endl;

		}



	}	
	
	return 0; 
}
