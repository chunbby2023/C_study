#define _CRT_SECURE_NO_WARNINGS
//ȯ���� �Ի��ϴ� ���α׷�
#include<stdio.h>

main(void) {
	double rate;// ��/�޷� ȯ��
	double usd;// �޷�ȭ
	int krw;//��ȭ�� ������ ������ ����

	printf("ȯ���� �Է��Ͻÿ� :");//�Է¾ȳ� �޽���
	scanf("%lf", &rate); //����ڷκ��� ȯ�� �Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", & krw);//��ȭ �ݾ� �Է�

	usd = krw / rate; // �޷�ȭ�� ȯ��

	printf("��ȭ %d ����%lf�޷� �Դϴ�.\n", krw, usd); //��� ��� ���

	return 0; //�Լ������ ��ȯ
}
