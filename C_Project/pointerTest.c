#include <stdio.h>
#include <string.h>

int main()
{
    int num01 = 10;
    int num02 = 20;
    int *ptr_num01 = &num01;
    int *ptr_num02 = &num02;
    int **pptr_num = &ptr_num01; //���� ������
    void *ptr = &num01;          //void ������ (�ּ� �� ���常 ����), ����� ����� type ��ȯ �ʿ�

    printf("num01 : %d\n", num01); //������ �� (data of variable)
    printf("num01 : %d\n", num02);
    printf("*ptr_num01 : %d\n", *ptr_num01); //������ ���� ��
    printf("*ptr_num02 : %d\n", *ptr_num02);
    printf("ptr_num01 : %#x\n", ptr_num01); //������ �ּ� ��
    printf("ptr_num02 : %#x\n", ptr_num02);

    ptr_num02 = ptr_num01; //�ּ� �� ����

    printf("num01 : %d\n", num01); //������ �� ����
    printf("num02 : %d\n", num02);
    printf("*ptr_num01 : %d\n", *ptr_num01); //���� �� �ٲ�
    printf("*ptr_num02 : %d\n", *ptr_num02);
    printf("ptr_num01 : %#x\n", ptr_num01); //�ּ� �� �ٲ�
    printf("ptr_num02 : %#x\n", ptr_num02);

    //���������� �׽�Ʈ(�����͸� �����ϴ� �����ʹ� ������ ���� ���� �� �� ����)
    printf("pptr_num : %#x\n", pptr_num);    //ptr_num01�� �ּ� ��
    printf("*pptr_num : %#x\n", *pptr_num);  //num01�� �ּ� ��
    printf("**pptr_num : %d\n", **pptr_num); //num01�� ���� �� ��

    int num = 10; // ���� ����

    void *ptr_num = &num; // void ������ ����

    printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num);

    printf("void ������ ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *(int *)ptr_num);

    *(int *)ptr_num = 20; // void �����͸� ���� �޸� ����

    printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num);

    printf("void ������ ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *(int *)ptr_num);

    return 0;
}