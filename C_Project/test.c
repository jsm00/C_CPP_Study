#include <stdio.h>
#define TEXT 234567; //#define ����ó�� �����ڸ� �̿��� ��ũ�� �ɺ��� ��� : �޸� ���� ����x
const int NUMBER =456789; //const Ű���带 �̿��� �ɺ��� ��� : �޸� ���� ����

int main()
{
	int num =475;
	int n;

	//int scanf(const char * restrict format, ...); : scanf�� ����
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d",&n); //scanf�� ���� ���� �Է� �ޱ�

	//int printf(const char * restrict format, ...); : printf�� ����
	//printf(TEXT); //����� ���� ���
	printf("%d\n",num); //���� �����ڸ� ���� ������ ��� ex)%d, %s, %f, %lf etc.
	printf("%d\n",n); //scanf�� ���� �Է� ���� ���� ���
	printf("%+7d\n",num); //��� �ʵ��� �� ���� ex)+,-,����,.x etc.

	//�̽������� ������
	printf("\'���� ����ǥ\'\n");
	printf("\"ū ����ǥ\"\n");
	printf("����ǥ\?\n");
	printf("\\�齽����\n");
	printf("��c\b�����̽�\n");
	printf("\ttab\n");
	printf("�������� ����\r����� ����\n");

	return 0;
}
