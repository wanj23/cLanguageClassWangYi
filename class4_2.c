#include <stdio.h>
int main(int argc, char const *argv[])
{
	long int num = 0;
	long int digit = 1;
	long int num_bak = 0;
	int final = 0;

	scanf("%ld", &num);

	// if(num == 0){
	// 	printf("ling");
	// }
	num_bak = num;

	if(num < 0){
		printf("fu ");
		num = -num;
		num_bak = num;
	//	printf("%ld\n", num);
	}
		
	while(num_bak >9){
		num_bak /= 10;
		digit *= 10;
	}
	//printf("%ld\n", digit);

	while(digit > 0){
		final =num / digit;

		switch(final){
			case 0: printf("ling");break;
			case 1: printf("yi");break;
			case 2: printf("er");break;
			case 3: printf("san");break;
			case 4: printf("si");break;
			case 5: printf("wu");break;
			case 6: printf("liu");break;
			case 7: printf("qi");break;
			case 8: printf("ba");break;
			case 9: printf("jiu");break;
		}

		if(digit >9){ 
			printf(" ");
		}
		num %= digit;
		digit /= 10;
	}
	printf("\n");

	return 0;
}