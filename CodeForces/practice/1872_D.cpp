#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll sum_seq(ll n){
	return (n * (n+1)) / 2;
}

int main(){
	
	int t; cin >> t;

	while(t--){
		ll n, x, y;
		cin >> n >> x >> y;
		ll nx = floor(n/x);
		ll ny = floor(n/y);
		ll nxy = floor(n/(lcm(x, y)));
		
		nx = nx - nxy;
		ny = ny - nxy;
		
		ll ix = n - nx;
		ll fx = n;
		ll fy = ny;

		ll sumx = sum_seq(fx) - sum_seq(ix);
		ll sumy = sum_seq(fy);

		ll ans = sumx - sumy;

		cout << ans << endl;
	}

	return 0;
}
