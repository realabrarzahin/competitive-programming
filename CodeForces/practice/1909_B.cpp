#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;

		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];

		if(n == 2){
			int max_v = max(a[0], a[1]);

			for(int i = 2; i <= max_v; i++){
				int r1 = a[0] % i;
				int r2 = a[1] % i;

				if(r1 != r2){
					cout << i << endl;
					break;
				}

			}
		}
		else{
			int ans_found = 0;
			int max_v = *max_element(a.begin(), a.end()) ;
			

			for(int i = 2; i <= max_v; i++){
		

				if(ans_found) break;

				vector<int> r(2);
				r[0] = r[1] = -1;

				for(int j = 0; j < n; j++){
					int x = a[j] % i;
					
					// cout << "i: " << i << " x: " << a[j] << endl;
					// cout << "R: " << x << endl;
					// cout << "r1: " << r[0] << " r2: " << r[1] << endl;
					// cout << "Ans Found: " << ans_found << endl;	

					int no_ans = 0;
					
					if(no_ans) break;

					if(r[0] == -1){
						r[0] = x;	
					}
					else if(r[1] == -1){
						if(r[0] != x ) r[1] = x;	
						else if (j == n - 1) no_ans = 1;
					}
					else{
						if(r[0] != x && r[1] != x){
							no_ans = 1;
							break;
						}

						else{
							if(j == n-1){
								ans_found = 1;
								cout << i << endl;
							}
						}
					}

				}

				// cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl ;
				
			}
		}
	}

	return 0;
}
