#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		int x1, y1; cin >> x1 >> y1;
		int x2, y2; cin >> x2 >> y2;
			
		x2 = (x2 - x1);
		y2 = (y2 - y1);

		x1 = 0;
		y1 = 0;

		vector<pair<int, int>> king(8);
		vector<pair<int, int>> queen(8);

		king = {
			{x1 + a, y1 + b},
			{x1 + a, y1 - b},
			{x1 - a, y1 + b},
			{x1 - a, y1 - b},
			{x1 + b, y1 + a},
			{x1 + b, y1 - a},
			{x1 - b, y1 + a},
			{x1 - b, y1 - a}
		};
		
		queen = {
			{x2 + a, y2 + b},
			{x2 + a, y2 - b},
			{x2 - a, y2 + b},
			{x2 - a, y2 - b},
			{x2 + b, y2 + a},
			{x2 + b, y2 - a},
			{x2 - b, y2 + a},
			{x2 - b, y2 - a}
		};
		

		// cout << "-------------------------" << endl;
		// cout << "-------------------------" << endl;
		// for(int i = 0; i < 8; i++) printf("(%d, %d)\n", king[i].first, king[i].second);
		// cout << "-------------------------" << endl;
		// for(int i = 0; i < 8; i++) printf("(%d, %d)\n", queen[i].first, queen[i].second);

		set<pair<int, int>> copies;
		int count = 0;	

		for(int i = 0; i < 8; i++){
			int kf = king[i].first;
			int ks = king[i].second;

			for(int j = 0; j < 8; j++){
				int qf = queen[j].first;
				int qs = queen[j].second;

				if(kf == qf && ks == qs){
					copies.insert({kf, ks});
				}
			}
		}

		cout << size(copies) << endl;
		
	}
	return 0;
}
