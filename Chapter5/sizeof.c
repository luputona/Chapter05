#include<stdio.h>

void main1()
{
	char ch = 0;
	int item = 0;
	double dnum = 0;

	ch = 9;
	item = 1052;
	dnum = 3.1415f;

	printf("���� ch�� ũ�� : %d \n",sizeof(ch));
	printf("���� item�� ũ�� : %d \n", sizeof(item));
	printf("���� dnum�� ũ�� : %d \n", sizeof(dnum));

	printf("char�� ũ�� : %d \n", sizeof(char));
	printf("int �� ũ�� : %d \n", sizeof(int));
	printf("long�� ũ�� : %d \n", sizeof(long));
	printf("long long�� ũ�� : %d \n", sizeof(long long));
	printf("float�� ũ�� : %d \n", sizeof(float));
	printf("double�� ũ�� : %d \n", sizeof(double));


}