#include <stdio.h>
#define TEXT 234567; //#define 선행처리 지시자를 이용한 매크로 심볼릭 상수 : 메모리 공간 차지x
const int NUMBER =456789; //const 키위드를 이용한 심볼릭 상수 : 메모리 공간 차지

int main()
{
	int num =475;
	int n;

	//int scanf(const char * restrict format, ...); : scanf의 원형
	printf("숫자를 입력하시오 : ");
	scanf("%d",&n); //scanf를 통한 정수 입력 받기

	//int printf(const char * restrict format, ...); : printf의 원형
	//printf(TEXT); //상수를 직접 출력
	printf("%d\n",num); //서식 지정자를 통해 변수를 출력 ex)%d, %s, %f, %lf etc.
	printf("%d\n",n); //scanf를 통해 입력 받은 변수 출력
	printf("%+7d\n",num); //출력 필드의 폭 설정 ex)+,-,숫자,.x etc.

	//이스케이프 시퀀스
	printf("\'작은 따옴표\'\n");
	printf("\"큰 따옴표\"\n");
	printf("물음표\?\n");
	printf("\\백슬래시\n");
	printf("백c\b스페이스\n");
	printf("\ttab\n");
	printf("지워지는 문자\r덮어쓰는 문자\n");

	return 0;
}
