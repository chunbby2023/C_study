#include<stdio.h>

int main(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int sum=0;
	int n;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = a+b+c+d;
	printf("�հ�� %d", sum);
	n = sum%10;
	if(n==3 || n==6|| n==9){
		printf("����!\n");
	}else{
		printf("����!");
	}
}
