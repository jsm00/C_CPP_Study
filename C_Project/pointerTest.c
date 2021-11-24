#include <stdio.h>
#include <string.h>

int main()
{
    int num01 = 10;
    int num02 = 20;
    int *ptr_num01 = &num01;
    int *ptr_num02 = &num02;
    int **pptr_num = &ptr_num01; //이중 포인터
    void *ptr = &num01;          //void 포인터 (주소 값 저장만 가능), 사용은 명시적 type 변환 필요

    printf("num01 : %d\n", num01); //변수의 값 (data of variable)
    printf("num01 : %d\n", num02);
    printf("*ptr_num01 : %d\n", *ptr_num01); //포인터 참조 값
    printf("*ptr_num02 : %d\n", *ptr_num02);
    printf("ptr_num01 : %#x\n", ptr_num01); //포인터 주소 값
    printf("ptr_num02 : %#x\n", ptr_num02);

    ptr_num02 = ptr_num01; //주소 값 대입

    printf("num01 : %d\n", num01); //변수의 값 동일
    printf("num02 : %d\n", num02);
    printf("*ptr_num01 : %d\n", *ptr_num01); //참조 값 바뀜
    printf("*ptr_num02 : %d\n", *ptr_num02);
    printf("ptr_num01 : %#x\n", ptr_num01); //주소 값 바뀜
    printf("ptr_num02 : %#x\n", ptr_num02);

    //이중포인터 테스트(포인터를 참조하는 포인터는 변수의 값에 도달 할 수 없음)
    printf("pptr_num : %#x\n", pptr_num);    //ptr_num01의 주소 값
    printf("*pptr_num : %#x\n", *pptr_num);  //num01의 주소 값
    printf("**pptr_num : %d\n", **pptr_num); //num01에 저장 된 값

    int num = 10; // 변수 선언

    void *ptr_num = &num; // void 포인터 선언

    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);

    printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int *)ptr_num);

    *(int *)ptr_num = 20; // void 포인터를 통한 메모리 접근

    printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);

    printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int *)ptr_num);

    return 0;
}