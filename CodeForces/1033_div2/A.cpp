#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		vector<int> lb(6);
	
		int ans = 0;

		for(int i = 0; i < 6; i++){
			cin >> lb[i] >>endl;
		}

		if(lb[0] == lb[2] && lb[2] == lb[4]){
			if(lb[1]+lb[3]+lb[5] == lb[0]) cout << "YES";
			else cout << "NO";
		}
		else if(lb[1] == lb[3] && lb[5] == lb[3]){
			if(lb[0]+lb[2]+lb[4] == lb[1]) cout << "YES";
			else cout << "NO";
		}
		else{
			for()
		}



	}


	return 0;
}
