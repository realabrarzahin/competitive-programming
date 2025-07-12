#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		
		int ans = n;
		for(int i = 0; i < n; i++){
			int count = 0;
			for(int j = i + 1; j < n; j++){
				if(s[i] == s[j]) break;
				else count++;
			}

			ans += count;
		}

		cout << ans << endl;
	}
	
	return 0;
}
