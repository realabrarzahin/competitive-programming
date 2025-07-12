#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int dx[4] = {1, 1, -1, -1};
int dy[4] = {1, -1, 1, -1};

int main(){
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		int kx, ky; cin >> kx >> ky;
		int qx, qy; cin >> qx >> qy;

		set<pair<int, int>> king, queen;

		for(int i = 0; i < 4; i++){
			king.insert({kx + dx[i] * a, ky + dy[i] * b});
			king.insert({kx + dx[i] * b, ky + dy[i] * a});
			
			queen.insert({qx + dx[i] * a, qy + dy[i] * b});
			queen.insert({qx + dx[i] * b, qy + dy[i] * a});
		}
		
		int ans = 0;
		for(auto pos: king){
			if(queen.find(pos) != queen.end())
				ans++;
		}

		cout << ans << endl;
	}
}
