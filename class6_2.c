#include <stdio.h>
//求鞍点
int main(){

	int n = 0;
	int x = 5;
	int y = 5;
	int i = 0, j = 0, k = 0 , l = 0;
	int status = 1;
	int status2 = 1;
	scanf("%d", &n);
	int a[99][99] = {{0},{0}};
	{
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
			}
		}
	}
	for (i = 0; i < n; i++){				
		for(j = 0; j < n; j++){
			for(k = 0; k < n; k++){
				if(a[i][j] < a[i][k]){
					status = 0;
					break;
				}
			}
			if(status == 1){
				y = j;
				printf("y=%d\n", y);
				break;
			}
		}
		for(l = 0; l < n; l++){
			if(a[i][y] > a[l][y]){
				status2 = 0;
				break;
			}
		}
		if(status2 == 1){
			x = i;
			printf("x=%d\n", x);
		}
		if(x != 0){
			break;
		}

	}
	printf("%d %d\n", x, y);
	return 0;
}
			// if(a[i][j] > a[i][j+1]){
			// 	a[i][j+1] = a[i][j];
			// }else{
			// 	x++;
			// }
			// for(int k = 0; k < n; k ++){
			// 	if(a[k][x] < a[k+1][x]){
			// 		a[k+1][x] = a[k][x];
			// 	}else{
			// 		y++;
			// 	}
			// }
			// if(y == i){
				// printf("%d %d\n", x, y);
				// goto stop;
// stop:



