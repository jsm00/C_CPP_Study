#include <stdio.h>
#include <string.h>

int main(){
    char str[3];

    printf("%s\n","��");
    scanf("%s", &str);
    if (strcmp(str, "��") == 0)
    {
        printf("1\n");
        return 0;
    }
    printf("0\n");
    return 0;
}

//https://webnautes.tistory.com/1158
/*
char* testFunction1(){
    char* a;
    return a;
}

char* testFunction2(char* a){
    return a;
}

int* testFunction3(){
    int * a;

    return a;
}

void testFunction4(int* a){ //�Ű������� �������� �޾ƿ��� �Լ� �ۿ� ���ڷ� �ּҰ��� ������ ������ ���� ���������� ������ ��ĥ �� ����
    
}

char* testFunction5(){
    char* a[4];

    return a;
}

char* testFunction6(char* a[]){
    return (char*) a;
}
*/