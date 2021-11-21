#include <stdio.h>

double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
double calculator(double , double, double (*func)(double, double));

int main(void)
{
	double (*calc)(double, double) = NULL;	// 함수 포인터 선언 
	double result = 0;
	
	double num01 = 3, num02 = 5;
	char oper = '*';

	switch (oper)
	{
		case '+':
			calc = add;
			break;
		case '-':
			calc = sub;
			break;
		case '*':
			calc = mul;
			break;
		case '/':
			calc = div;
			break;
		default:
			puts("사칙연산(+, -, *, /)만을 지원합니다.");
	}

	result = calculator(num01, num02, calc);
	printf("사칙 연산의 결과는 %lf입니다.\n", result);
	return 0;
}

double add(double num01, double num02)
{
	return num01 + num02;
}

double sub(double num01, double num02)
{
	return num01 - num02;
}

double mul(double num01, double num02)
{
	return num01 * num02;
}

double div(double num01, double num02)
{
	return num01 / num02;
}

double calculator(double num01, double num02, double (*func)(double, double))
{
	return func(num01, num02);
}