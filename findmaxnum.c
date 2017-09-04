#include <stdio.h>
int main(int argc, char const *argv[])
{
	int set = 1;
	int x = 5;
	int a[3] = {1, 7, 8, 1};
	for (int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; j++){
			if(a[i] < a[j]){
				set = 0;
				break;
			}
		}
		if(set == 1){
			x = i;
		}
		set = 1;
	}
	printf("a[%d} is max\n", x);
	printf("set = %d\n", set);

	return 0;
}