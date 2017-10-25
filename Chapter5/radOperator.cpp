#include<stdio.h>

void main3()
{
	double rad = 0;
	double area = 0;

	printf("원의 반지름 입력 : ");
	scanf_s("%lf",&rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이 : %f \n",area);

}