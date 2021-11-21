#include<stdio.h>
#include<stdbool.h>
//정사각형의 한 변의 길이가 주어지면 0-10의 반지름을 가지는 원이 
//정사각형을 덮을 수 있는지 판별
double n; //정사각형 한 변의 길이를 전역변수로 선언
bool canCover(double r){ //주어진 정사각형을 변수 r이 반지름인 원이 덮을 수 있는지 판별하는 함수
    
    double radius_squared = 4*r*r; //정사각형 빗변의 제곱
    double side_squared = 2*n*n; //정사각형 두 변의 제곱의 합

    if(radius_squared>=side_squared) //피타고라스 정리를 이용한 대소 비교
        return true;
    else
        return false;
}

double minSquareCover(){ //정사각형을 덮을 수 있는 가장 작은 원의 반지름 반환
    double minSquare =0, maxSquare =10; //최대, 최소 반지름의 길이 설정

    while(maxSquare-minSquare>1e-10){ //절대 오차를 이용하여 답 반환
        double mid = (maxSquare+minSquare)/2; // 이진 탐색을 활용하여 결과 도출
        if(canCover(mid))
            maxSquare=mid;
        else
            minSquare=mid;
    }
    return minSquare;
}

int main()
{
    printf("정사각형의 한변의 길이 입력 : ");
    scanf("%lf",&n); //한변의 길이를 입력 받음

    double result = minSquareCover(); //결과 값을 변수에 저장

    printf("가장 작은 값은 %lf이다.",result); //결과 출력

    return 0;
}

