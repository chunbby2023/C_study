#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main(void)
{
	float radius; //���� ������
	float area; //����
	
	printf("�������Է��Ͻÿ� : ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("���� ���� : %f", area);
}
