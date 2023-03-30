#include<stdio.h>

int main(void){
	int s1=10;
	int s2=20;
	int s3=20;
	int s4=30;
	
	int avg=(s1+s2+s3+s4)/4;
	if(avg>=60){
		printf("PASS");
	}else{
		printf("FAIL");
	}
	return 0;
}
