//输出一定范围内的完数

#include <stdio.h>

int isWant(int num);
int main(){

	int n = 0;
	int m = 0;
	int num = n;
	int space = 0;
	scanf("%d %d", &n, &m);
	for(num = n; num <= m ;num++){
		if(isWant(num)){
			space++;
			if(space > 1){
				printf(" ");
			}
			printf("%d", num);
		}
	}	
	printf("\n");

	return 0;
}

int isWant(int num){
	int x = 0;
	int i = 1;
	int sum = 0;
	for(i = 1; i < num; i++){
		if(num % i == 0){
			sum += i;
		}
	}

	if(sum == num){
		x = 1;
	}
	return x;
}