#include <stdio.h>

int main(void)
{
    int num01 = 10, num02 = 20, num03 = 30;
    int *arr01[3] = {&num01, &num02, &num03}; //������ �迭
    int arr02[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int(*pArr)[3] = arr02; //�迭 ������

    printf("%d\n", *arr01[0]); //�� �����Ͱ� ����Ű�� ������ ���� ���
    printf("%d\n", *arr01[1]);
    printf("%d\n", *arr01[2]);

    printf("%d\n", *arr02[0]); //2���� �迭���� �� �κ� �迭�� ���� �ּҿ� ����� ���� ���
    printf("%d\n", *arr02[1]);

    printf("%d\n", arr02[0][2]); //�迭�� �̸����� ����
    printf("%d\n", pArr[0][2]);  //�迭 �����ͷ� ����
    return 0;
}