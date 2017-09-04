/*
#include <stdio.h>
int	main(int argc, char const *argv[])
{
	int a,b,c,d;

	printf("请输入一个3位的正整数\n");
	scanf("%d",&a);

	b = a/100;
	c = (a -b*100)/10;
	d = (a - b*100 - c*10);
	a = d*100 + c*10 + b;

	printf("%d\n", a);

	return 0;
}
*/
#include <stdio.h>
int main()
{int x,a,b,c;
	printf("请输入一个3位的正整数\n");
 	scanf("%d",&x);
 	a=x/100;
 	b=x/10%10;
 	c=x%10;
 	x=c*100+b*10+a;
	printf("逆序数是%d\n", x);
 return 0;
}