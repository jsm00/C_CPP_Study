#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **bookSort(char *a[], int N);      //사용할 함수 선언
char **swap(char *a[], int i, int j);

int main()
{
    char **sortedBookName; //정리된 배열 선언
    int N,n,l=0;

    char buffer[30]; //입력 받은 문자열을 저장할 배열
    
    printf("----------------------------------\n");
    printf("책 정리 프로그램에 오신걸 환영합니다.\n");
    printf("----------------------------------\n");

    printf("입력할 책의 갯수를 입력해주세요 : ");
    scanf("%d", &N);
    char *unsortedBookName[N];  //입력 받은 문자열을 배열로 저장할 문자열 배열

    printf("책 제목을 입력해 주세요 : ");

    while ( n < N ) {
        scanf("%s", buffer);
        
        l = strlen(buffer);
        if (l > 0){
            /*char* newstrptr = (char*)malloc(sizeof(char) * (l + 1));      //malloc을 통해 buffer에 저장된 길이만큼 할당
            strcpy(newstrptr, buffer);      //buffer의 내용을 카피하여 저장
            unsortedBookName[n] = newstrptr;*/   //그 값을 unsortedBookName에 저장
            unsortedBookName[n] = strdup(buffer);   //strdup() 함수를 통해 저장
            n++;
        } else {
            break;
        }
    }

    printf("정리중....\n");
    sortedBookName = bookSort(unsortedBookName, N);  //정리하는 함수 호출
    printf("결과 : ");

    for (int i = 0; i < N; i++)         //결과 출력
    {
        printf("%s ", sortedBookName[i]);
    }

    return 0;
}

char **bookSort(char *a[], int N)       //책 이름 배열과 책의 갯수를 매개변수로 받아 정렬하는 함수
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (strncmp(a[i], a[j], 1) > 0)     //a[j]가 a[i]의 첫 글자보다 값이 크면 두 요소의 순서를 교환
            {
                a = swap(a, i, j);      //swap함수 호출
            }
        }
    }
    return a;
}

char **swap(char *a[], int i, int j)  //배열의 요소의 순서를 바꿔주는 함수
{
    char *temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    return a;
}
