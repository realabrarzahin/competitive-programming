#include<stdio.h>

int main(){
	
	int t;
	scanf("%d", &t);

	while(t--){
		int n;
		scanf("%d", &n);
	
		char s[n];
		scanf("%s", s);

		int track = 0;
		
		for(int i = 1; i < (n - 1); i++){

			if(track){
				break;
			}

			for(int j = 0; j < i; j++){
				if(s[j] == s[i]){
					printf("YES\n");
					track = 1;	
					break;
				}
			}

			if(track){
				break;
			}

			for(int j = i + 1; j <= n-1; j++){
				if(s[j] == s[i]){
					printf("YES\n");
					track = 1;	
					break;
				}
			}

		}
		
		if(!track)
			printf("NO\n");
	

	}
	return 0;
}
