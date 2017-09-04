#include <stdio.h>
int main (){
	int signal= 0;
	//printf("请输入信号强度\n");
	scanf("%d",&signal);
	switch (signal%10){
		case 1:printf("Faint signals, barely perceptible, ");break;
		case 2:printf("Very weak signals, ");break;
		case 3:printf("Weak signals, ");break;
		case 4:printf("Fair signals, ");break;
		case 5:printf("Fairly good signals, ");break;
		case 6:printf("Good signals, ");break;
		case 7:printf("Moderately strong signals, ");break;
		case 8:printf("Strong signals, ");break;
		case 9:printf("Extremely strong signals, ");break;
	}
	switch (signal/10){
		case 1:printf("unreadable.\n");break;
		case 2:printf("bare readable,occasional words distinguishable.\n");break;
		case 3:printf("readable with considerable difficulty.\n");break;
		case 4:printf("readable with pratically no difficulty.\n");break;
		case 5:printf("perfectly readable.\n");break;
	}
	return 0;
}
