#include <stdio.h>
//codeUp 그리디 문제(거스름돈)
//거스름돈의 갯수를 최소화하는 문제
int main()
{
    int n;
    int total = 0;

    scanf("%d", &n);  //총 가격을 입력 받는다

    total += (n / 10) % 5 + (n / 50) % 2;   //+를 기준으로 앞은 10원의 갯수를 뒤는 50원의 갯수를 나타낸다
    total += (n / 100) % 5 + (n / 500) % 2;  //+를 기준으로 앞은 100원의 갯수를 뒤는 500원의 갯수를 나타낸다
    total += (n / 1000) % 5 + (n / 5000) % 2; //+를 기준으로 앞은 1000원의 갯수를 뒤는 5000원의 갯수를 나타낸다
    total += (n / 10000) % 5 + (n / 50000); //+를 기준으로 앞은 10000원의 갯수를 뒤는 50000원의 갯수를 나타낸다

    printf("%d", total); //결과 출력

    return 0;
}