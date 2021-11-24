#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr_arr;

    ptr_arr = (int *)malloc(5 * sizeof(int)); //malloc을 통한 메모리 할당

    if (ptr_arr == NULL) //동적 할당에 실패시 메시지 출력 및 프로그램 종료
    {
        printf("동적 할당에 실패 하였습니다.\n");
        return 0;
    }

    printf("malloc 결과 : ");

    for (int i = 0; i < 5; i++) //malloc 초기 값 출력
    {
        printf("%d ", ptr_arr[i]);
    }

    ptr_arr = (int *)realloc(ptr_arr, (10 * sizeof(int))); //realloc을 통한 메모리 추가 할당

    if (ptr_arr == NULL) //추가 할당 실패시 메시지 출력 및 프로그램 종료
    {
        printf("추가 할당에 실패 하였습니다.\n");
        return 0;
    }

    printf("\nrealloc 결과 : ");

    for (int i = 0; i < 10; i++) //realloc 초기 값 출력
    {
        printf("%d ", ptr_arr[i]);
    }

    free(ptr_arr); //free를 통해 할당받은 메모리 해체

    return 0;
}