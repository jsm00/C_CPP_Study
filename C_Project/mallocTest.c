#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *mal_arr;
    int *cal_arr;

    mal_arr = (int *)malloc(10 * sizeof(int)); //malloc
    cal_arr = (int *)calloc(10, sizeof(int)); //calloc�� ���� �޸� �Ҵ�

    if (mal_arr == NULL || cal_arr == NULL) //�����Ҵ� ���н� �޼��� ��� �� ���α׷� ����
    {
        printf("���� �Ҵ��� ���� �߽��ϴ�.\n");
        return 0;
    }

    printf("malloc ��� : ");
    
    for (int i = 0; i < 10; i++) //malloc �ʱ� �� ���
    {
        printf("%d ", mal_arr[i]);
    }

    printf("\ncalloc ��� : ");
    
    for (int i = 0; i < 10; i++) //calloc �ʱ� �� ���
    {
        printf("%d ", cal_arr[i]);
    }

    free(mal_arr); //free�� ���� �޸� ����
    free(cal_arr);

    return 0;
}