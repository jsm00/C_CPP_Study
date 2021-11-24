#include <stdio.h>

int main(void)
{
    int num01 = 10, num02 = 20, num03 = 30;
    int *arr01[3] = {&num01, &num02, &num03}; //포인터 배열
    int arr02[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int(*pArr)[3] = arr02; //배열 포인터

    printf("%d\n", *arr01[0]); //각 포인터가 가르키는 변수의 값을 출력
    printf("%d\n", *arr01[1]);
    printf("%d\n", *arr01[2]);

    printf("%d\n", *arr02[0]); //2차원 배열에서 각 부분 배열의 시작 주소에 저장된 값을 출력
    printf("%d\n", *arr02[1]);

    printf("%d\n", arr02[0][2]); //배열의 이름으로 참조
    printf("%d\n", pArr[0][2]);  //배열 포인터로 참조
    return 0;
}