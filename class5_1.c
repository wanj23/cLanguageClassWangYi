//分解质因数


#include <stdio.h>

long int isPrime(long int number);
int main(){

	long int n = 2;
	scanf("%ld", &n);
	printf("%ld=", n);

	while( isPrime(n) != n){
		printf("%ldx", isPrime(n));
		n /=isPrime(n);
	}
	printf("%ld\n", n);

	return 0;
}

long int isPrime(long int number){
	long int i = 2;
	for(i = 2; i <= number; i ++){
		if(number % i == 0){
			break;
		}
	}
	return i;
}