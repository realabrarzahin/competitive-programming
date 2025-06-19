#include<stdio.h>

int max(int a, int b, int c){
	if(a >= b){
		if(a > c){
			return a;
		}
		else{
			return c;
		}
	}else{
		if(b > c){
			return b;
		}
		else{
			return c;
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);

	while(t--){

		int n; 
		scanf("%d", &n);
		
		int a[n];
		int b[n];
		int c[n];

		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);	
		}
		
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);	
		}

		for(int i = 0; i < n; i++){
			scanf("%d", &c[i]);	
		}

		int sum = 0;
		for(int i = 0; i < n; i++)
			sum = sum + max(a[i], b[i], c[i]);

		printf("%d\n", sum);

	}
	return 0;
}
