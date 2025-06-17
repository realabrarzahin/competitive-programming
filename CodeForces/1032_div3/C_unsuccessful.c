#include<stdio.h>

int main(){
	
	int t;
	scanf("%d", &t);

	while(t--){
		
		int n, m;
		scanf("%d %d", &n, &m);

		int max = 0;
		int matrix[n][m];

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				int x;
				scanf("%d", &x);
				matrix[i][j] = x;

				if(x >= max)
					max = x;
			}
		}
	
		int r = 0;
		int track_g = 0;

		int same_r[n];
		for(int i = 0; i < n; i++)
			same_r[i] = -1;

		for(int i = 0; i < n; i++){
			int track_l = 0;

			for(int j = 0; j < m; j++){
				if(matrix[i][j] == max){
					track_l++;
				}	
			}

			if(track_l > track_g){
				track_g = track_l;
				r = i;
			}


		}
		
		int c = 0;
		int track_r = track_g;
		track_g = 0;

		int same_c[m];
		for(int j = 0; j < m; j++)
			same_c[j] = -1;

		for(int j = 0; j < m; j++){
			int track_l = 0;

			for(int i = 0; i < n; i++){
				if(matrix[i][j] == max){
					track_l++;
				}	
			}

			if(track_l > track_g){
				track_g = track_l;
				c = j;
			}

		}
		// printf("%d\t", r+1);
		// printf("%d\n", c+1);

		for(int i = 0; i < n; i++){
			int count_l = 0;

			for(int j = 0; j < m; j++){
				if(matrix[i][j] == max)
					count_l++;
			}
			
			if(track_r == count_l){
				if(matrix[i][c] != max){
					r = i;	
				}
			}

			

		}

		for(int j = 0; j < m; j++){
			matrix[r][j]--;
		}
		for(int i = 0; i < n; i++){
			matrix[i][c]--;
		}

		matrix[r][c]++;
		
//		for(int i = 0; i < n; i++){
//			for(int j = 0; j < m; j++){
//			printf("%d ", matrix[i][j]);
//			}
//			printf("\n");
//		}
		
		max = 0;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(matrix[i][j] >= max)
					max = matrix[i][j];
			}
		}

		printf("%d\n", max);
	}
	return 0;
}
