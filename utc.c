#include <stdio.h>
int	main(int argc, char const *argv[])
{
	int bjt, utc;
	const int diff = 800, day = 2400;

	//printf("请输入BJT时间\n");
	scanf("%d",&bjt);

	
	if (bjt/100 >=8)
	{
		utc =bjt -diff;
	}else{
		utc =bjt -diff +day;
	}


printf("%d\n",utc);//UTC时间


	return 0;
}