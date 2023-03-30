#include <stdio.h>

int main() {
  printf("쿰칼리지 1학년 2310371 박진욱 - 근의공식\n");
  
  float a, b, c, d;
  
  printf("3개의 숫자를 입력하세요:");
  scanf("%f %f %f", &a, &b, &c);
  d = a*b-4*a*c;
  if(d>=0){
  	printf("근이 존재합니다");
  	printf("%f", d);
  }
  else{
  	printf("근이 존재하지 않습니다.\n");
  	printf("%f", d);
  } 
  return 0;
}
