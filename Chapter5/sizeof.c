#include<stdio.h>

void main1()
{
	char ch = 0;
	int item = 0;
	double dnum = 0;

	ch = 9;
	item = 1052;
	dnum = 3.1415f;

	printf("변수 ch의 크기 : %d \n",sizeof(ch));
	printf("변수 item의 크기 : %d \n", sizeof(item));
	printf("변수 dnum의 크기 : %d \n", sizeof(dnum));

	printf("char의 크기 : %d \n", sizeof(char));
	printf("int 의 크기 : %d \n", sizeof(int));
	printf("long의 크기 : %d \n", sizeof(long));
	printf("long long의 크기 : %d \n", sizeof(long long));
	printf("float의 크기 : %d \n", sizeof(float));
	printf("double의 크기 : %d \n", sizeof(double));


}