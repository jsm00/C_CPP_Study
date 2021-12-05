#include <stdio.h>
//codeUp 그리디 문제(최소 대금)
//그날의 파스타 세 종류와 쥬스 두 종류중 하나 씩 고르는 세트메뉴에서
//파스타와 쥬스의 가격의 합계에 10%를 더한 값이 대금된다 할 때 이 값을 구하는 문제
int main()
{
    int p1, p2, p3;
    int f1, f2;
    int t1, t2;
    double total;
    scanf("%d", &p1);   //각 파스타와 쥬스의 가격을 입력받음
    scanf("%d", &p2);
    scanf("%d", &p3);
    scanf("%d", &f1);
    scanf("%d", &f2);

    if (p1 <= p2)    //파스타 중에서 최고 금액 구하기
    {
        t1 = (p1 <= p3) ? p1 : p3;
    }
    else
    {
        t1 = (p2 <= p3) ? p2 : p3;
    }

    if (f1 <= f2)   //쥬스 중에서 최고 금액 구하기
    {
        t2 = f1;
    }
    else
    {
        t2 = f2;
    }

    total = t1 + t2 + ((double)(t1 + t2) / 10);     //대금 계산

    printf("%.1lf", total);     //소숫점 한자리까지 결과 출력

    return 0;
}