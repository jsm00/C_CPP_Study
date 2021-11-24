#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *mal_arr;
    int *cal_arr;

    mal_arr = (int *)malloc(10 * sizeof(int)); //malloc
    cal_arr = (int *)calloc(10, sizeof(int)); //calloc을 통해 메모리 할당

    if (mal_arr == NULL || cal_arr == NULL) //동적할당 실패시 메세지 출력 및 프로그램 종료
    {
        printf("동적 할당을 실패 했습니다.\n");
        return 0;
    }

    printf("malloc 결과 : ");
    
    for (int i = 0; i < 10; i++) //malloc 초기 값 출력
    {
        printf("%d ", mal_arr[i]);
    }

    printf("\ncalloc 결과 : ");
    
    for (int i = 0; i < 10; i++) //calloc 초기 값 출력
    {
        printf("%d ", cal_arr[i]);
    }

    free(mal_arr); //free를 통해 메모리 해제
    free(cal_arr);

    return 0;
}