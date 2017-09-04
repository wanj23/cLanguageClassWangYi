#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int sum = 0;
	int count = 1;
	int num = 2;
	int i = 2;
	int isPrime = 1;
	scanf("%d %d", &n, &m);

	while(count <= m){
		for(i =2; i<num; i++ ){
			if (num%i == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if(isPrime == 1){
		
//			printf("num is %d\n", num);
			if(count >= n){
				sum += num;
			}

			count++;
		}

		
		isPrime = 1;
		num ++;
	}
	printf("%d\n", sum);
	
	return 0;
}

