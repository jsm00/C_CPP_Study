#include <stdio.h>
#include <string.h>

int main(){
    char str[3];

    printf("%s\n","ㄱ");
    scanf("%s", &str);
    if (strcmp(str, "ㄱ") == 0)
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

void testFunction4(int* a){ //매개변수로 참조값을 받아오면 함수 밖에 인자로 주소값을 전달한 변수의 값에 직접적으로 영향을 미칠 수 있음
    
}

char* testFunction5(){
    char* a[4];

    return a;
}

char* testFunction6(char* a[]){
    return (char*) a;
}
*/