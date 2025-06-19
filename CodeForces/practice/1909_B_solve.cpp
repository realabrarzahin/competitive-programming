#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long t; cin >> t;
	while(t--){

		long long n; cin >> n;
		
		vector<long long> a(n);
		for(long long i = 0; i < n; i++) cin >> a[i];
		
		long long ans_found = 0;
		for(long long i = 1; i < 60; i++){
			
			if(ans_found) break;
		
			long long track;

			for(long long j = 0; j < n; j++){
		
				long long r = (a[j] >> (i - 1)) & 1LL;

				if(j == 0){
					track = r;
				}else{
					if(r != track){ 
						ans_found = 1;

						long long ans = 1 << i;
						cout << ans << endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}
