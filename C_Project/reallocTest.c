#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr_arr;

    ptr_arr = (int *)malloc(5 * sizeof(int)); //malloc�� ���� �޸� �Ҵ�

    if (ptr_arr == NULL) //���� �Ҵ翡 ���н� �޽��� ��� �� ���α׷� ����
    {
        printf("���� �Ҵ翡 ���� �Ͽ����ϴ�.\n");
        return 0;
    }

    printf("malloc ��� : ");

    for (int i = 0; i < 5; i++) //malloc �ʱ� �� ���
    {
        printf("%d ", ptr_arr[i]);
    }

    ptr_arr = (int *)realloc(ptr_arr, (10 * sizeof(int))); //realloc�� ���� �޸� �߰� �Ҵ�

    if (ptr_arr == NULL) //�߰� �Ҵ� ���н� �޽��� ��� �� ���α׷� ����
    {
        printf("�߰� �Ҵ翡 ���� �Ͽ����ϴ�.\n");
        return 0;
    }

    printf("\nrealloc ��� : ");

    for (int i = 0; i < 10; i++) //realloc �ʱ� �� ���
    {
        printf("%d ", ptr_arr[i]);
    }

    free(ptr_arr); //free�� ���� �Ҵ���� �޸� ��ü

    return 0;
}