#include<stdio.h>

int max(int x, int y){
	if(x >= y)
		return x;
	else
		return y;
}

int min(int x, int y){
	if(x >= y)
		return y;
	else
		return x;
}

int abs(int x){
	if(x < 0)
		return -x;
	else
		return x;
}

int main(){
	
	int t; 
	scanf("%d", &t);
	
	while(t--){

		int n, s;
		scanf("%d %d",&n, &s);

		int x[n];

		int i = 0;
		while(i < n){
			int y;
			scanf("%d", &y);
			
			x[i] = y;
			i++;
		}
		
		if(x[0] == s || x[n-1] == s){
			printf("%d", abs(x[n-1] - x[0]));
		}
		else if(s > x[0] && s < x[n-1]){
			int min_dist = min(s - x[0], x[n-1] - s);
			int max_dist = max(s - x[0], x[n-1] - s);
			
			int ans = min_dist * 2 + max_dist;

			printf("%d", abs(ans));
		}
		else if(s > x[n-1]){
			printf("%d", s - x[0]);
		}
		else{
			printf("%d", x[n-1] - s);
		}

		printf("\n");

	}

	return 0;
}
