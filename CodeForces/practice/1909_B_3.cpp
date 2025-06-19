#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		vector<int> a(n);

		int odd = 0;
		int even = 0;

		for(int i = 0; i < n; i++){
			cin >> a[i];

			if(a[i] % 2) even++;
			else odd++;
		}
		
		if(odd != 0 && even != 0) cout << 2 << endl;
		else if(!odd) cout << 4 << endl;
		else cout << 3 << endl;

	}

	return 0;
}
