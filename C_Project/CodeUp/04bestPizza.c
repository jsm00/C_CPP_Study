#include <stdio.h>
#include <stdlib.h>
//codeUp 그리디 문제(최고의 피자)
//피자의 도우와 토핑을 합쳐 1달러당 열량(calorie)의 최대 값 구하기

int *sort(int *topping_cal, int N); //함수 미리 선언
int *swap(int *topping_cal, int i, int j);

int main()
{
    int *topping_cal;     //각 토핑의 열량을 저장할 배열
    int N, doughprice, toppingprice, dough_cal; //각 변수 선언

    scanf("%d", &N);
    scanf("%d %d", doughprice, &toppingprice);      //순서대로 입력받음
    scanf("%d", &dough_cal);
    topping_cal = (int *)malloc(N * sizeof(int));     //입력 받을 갯수만큼 malloc을 통해 공간 할당
    int totalCal = dough_cal;       //도우는 항상 필요하므로 최종 칼로리와 가격 변수에 추가
    int totalPrice = doughprice;    
    for (int i = 0; i < N; i++)     //각 토핑의 칼로리 입력받기
    {
        scanf("%d", &topping_cal[i]);
    }
    topping_cal = sort(topping_cal, N);  //토핑 칼로리를 내림차순으로 정렬
    for (int i = 0; i < N; i++)
    {
        if (totalCal / totalPrice <= (totalCal + topping_cal[i]) / (totalPrice + toppingprice)) 
        {   //1달러 당 열량이 기존보다 토핑을 추가 했을 때 더 높으면 
            //최종 가격과 최종 칼로리에 각 변수를 더함
            totalPrice += toppingprice;
            totalCal += topping_cal[i];
        }
    }

    printf("%d", totalCal / totalPrice); //결과 출력

    return 0;
}

int *sort(int *topping_cal, int N)  //내림차순 정렬 함수
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (topping_cal[i] < topping_cal[j])
            {
                topping_cal = swap(topping_cal, i, j);
            }
        }
    }
    return topping_cal;
}

int *swap(int *topping_cal, int i, int j)   //배열 요소의 순서를 바꿔주는 함수
{
    int temp = topping_cal[i];
    topping_cal[i] = topping_cal[j];
    topping_cal[j] = temp;

    return topping_cal;
}