#include <stdio.h>

int main() {
  printf("��Į���� 1�г� 2310371 ������ - ���ǰ���\n");
  
  float a, b, c, d;
  
  printf("3���� ���ڸ� �Է��ϼ���:");
  scanf("%f %f %f", &a, &b, &c);
  d = a*b-4*a*c;
  if(d>=0){
  	printf("���� �����մϴ�");
  	printf("%f", d);
  }
  else{
  	printf("���� �������� �ʽ��ϴ�.\n");
  	printf("%f", d);
  } 
  return 0;
}
