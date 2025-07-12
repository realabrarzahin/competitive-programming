#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int len = s.size();
	
		int z = 0;
		int o = 0;

		for(int i = 0; i < len; i++){
			if(s[i] == '0') z++;
			else o++;
		}
		
		if(z != o){
			for(int i = 0; i < len; i++){
				if(s[i] == '0'){
					if(o) o--;
					else break;
				}else{
					if(z) z--;
					else break;
				}
			}

			cout << (z | o) << endl;
		}else{
			cout << 0 << endl;
		}


	}

	return 0;
}
