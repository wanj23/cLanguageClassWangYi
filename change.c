#include <stdio.h>
int main(int argc, char const *argv[])
{
	int price = 0;

	printf("请输入价格");
	scanf("%d",&price);

	int change = 100 - price;
	printf("找回%d元\n",change	);
	
	return 0;
}