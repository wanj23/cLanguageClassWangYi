//多项式加法
#include <stdio.h>

int input(int arr[]);
int max(int a,int b);
int main(){

	int a[99] = {0};
	int b[99] = {0};
	int maxnum = 0;
	int t = 0;

	maxnum = max(input(a), input(b));
	for(int i = 0;i <= maxnum; i++){
		a[i] += b[i]; 
	}

	for(; maxnum >1; maxnum--){
		if(a[maxnum] != 0){
			if(a[maxnum] > 0){
				if(t>0){
					printf("+");
				}
			}
			t++;
			if(a[maxnum] == 1){
				printf("x%d", maxnum);
			}else if(a[maxnum] == -1){
				printf("-x%d", maxnum);
			}else{
				printf("%dx%d", a[maxnum], maxnum);
			}
		}
	}
	if(a[1] != 0){
		if(a[1] > 0){
			printf("+");
		}
		if(a[1] == 1){
			printf("x");
		}else if(a[1] == -1){
			printf("-x");
		}else{
			printf("%dx", a[1]);
		}
	}
	if(a[0] !=0){
		if(a[0] > 0){
				printf("+");
			}
		printf("%d", a[0]);
	}

	printf("\n");
	return 0;
}

int input(int arr[]){
	int n = 0;
	int m = 0;
	int i = 0;
	scanf("%d %d", &m, &n);
	arr[m] = n;
	i = m;
	while(m != 0){
		scanf("%d %d", &m, &n);
		arr[m] = n;
		}
	return i;
}

int max(int a, int b){
	return a > b ? a : b;

}