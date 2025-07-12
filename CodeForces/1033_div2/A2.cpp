#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int t; cin >> t;
	while(t--){
		int l1, l2, l3;
		int b1, b2, b3;
		
		cin >> l1 >> b1;
		cin >> l2 >> b2;
		cin >> l3 >> b3;

		if(l1==l2 && l2==l3){
			if(b1+b2+b3 == l1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if(b1 == b2 && b2 == b3){
			if(l1+l2+l3 == b1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if(b1 == b2 || l1 == l2){
			cout << "NO" << endl;
		}
		else if( l1 >= b1){
			if(l1 == l2 + l3){
				if(b1 + b2 == b1 + b3 && b1+b2 == l1) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			else cout << "NO" << endl;
		}else{
			if(b1 == b2 + b3){
				if(l1 + l2 == l1 + l3 && l1 + l2 == b1) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
	}

	return 0;
}

