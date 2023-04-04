#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main(void)
{
	float radius; //원의 반지름
	float area; //면적
	
	printf("반지름입력하시오 : ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("원의 면적 : %f", area);
}
