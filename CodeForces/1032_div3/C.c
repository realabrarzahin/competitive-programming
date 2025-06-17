#include<stdio.h>

int main(){
	
	int t;
	scanf("%d", &t);

	while(t--){

		int n, m;
		scanf("%d %d", &n, &m);

		int mtx[n][m];
		int max = 0;
		int max_count = 0;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &mtx[i][j]);

				if(mtx[i][j] > max)
					max = mtx[i][j];
			}
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(mtx[i][j] == max)
					max_count++;
			}
		}

		int r_mc[n];
		for(int i = 0; i < n; i++){
			int count = 0;
			for(int j = 0; j < m; j++){
				if(mtx[i][j] == max){
					count++;
				}
			}
			r_mc[i] = count;
		}
		
		int ans = max;

		for(int j = 0; j < m; j++){
			int count = 0;
			for(int i = 0; i < n; i++){
				if(mtx[i][j] == max){
					count++;
				}
			}

			for(int k = 0; k < n; k++){
				if(mtx[k][j] == max){
					if((r_mc[k] + count - 1) == max_count){
						ans = max - 1;
						break;
					}
				}
				else{
					if((r_mc[k] + count) == max_count){
						ans = max - 1;
						break;
					}
				}

			}

			if(ans == max - 1)
				break;
		}

		printf("%d\n", ans);

		// printf("%d", max);
		// printf("%d\n", max_count);
		// for(int i = 0; i < n; i++)	
		// 	printf("%d ", r_mc[i]);
		// printf("\n");
	}
	return 0;
}
