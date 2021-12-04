#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **bookSort(char *a[], int N);
char **swap(char *a[], int i, int j);

int main()
{
    char **sortedBookName;
    int N,n,l=0;

    char buffer[30]; 

    
    printf("----------------------------------\n");
    printf("å ���� ���α׷��� ���Ű� ȯ���մϴ�.\n");
    printf("----------------------------------\n");

    printf("�Է��� å�� ������ �Է����ּ��� : ");
    scanf("%d", &N);
    char *unsortedBookName[N];

    printf("å ������ �Է��� �ּ��� : ");

    while ( n < N ) {
        scanf("%s", buffer);
        
        l = strlen(buffer);
        if (l > 0){
            /*char* newstrptr = (char*)malloc(sizeof(char) * (l + 1));
            strcpy(newstrptr, buffer);
            unsortedBookName[n] = newstrptr;*/
            unsortedBookName[n] = strdup(buffer);
            n++;
        } else {
            break;
        }
    }

    printf("������....\n");
    sortedBookName = bookSort(unsortedBookName, N);
    printf("��� : ");

    for (int i = 0; i < N; i++)
    {
        printf("%s ", sortedBookName[i]);
    }

    return 0;
}

char **bookSort(char *a[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (strncmp(a[i], a[j], 1) > 0)
            {
                a = swap(a, i, j);
            }
        }
    }
    return a;
}

char **swap(char *a[], int i, int j)
{
    char *temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    return a;
}
