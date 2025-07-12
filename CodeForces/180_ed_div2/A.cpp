#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		int a, x, y;
		double sum = x + y;

		cin >> a >> x >> y;
		
		int ans = 0;

		if(a > x && a > y) cout << "YES" << endl;
		else if(a < x && a < y) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}
	
	return 0; 
}
