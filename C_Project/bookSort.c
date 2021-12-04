#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **bookSort(char *a[], int N);      //����� �Լ� ����
char **swap(char *a[], int i, int j);

int main()
{
    char **sortedBookName; //������ �迭 ����
    int N,n,l=0;

    char buffer[30]; //�Է� ���� ���ڿ��� ������ �迭
    
    printf("----------------------------------\n");
    printf("å ���� ���α׷��� ���Ű� ȯ���մϴ�.\n");
    printf("----------------------------------\n");

    printf("�Է��� å�� ������ �Է����ּ��� : ");
    scanf("%d", &N);
    char *unsortedBookName[N];  //�Է� ���� ���ڿ��� �迭�� ������ ���ڿ� �迭

    printf("å ������ �Է��� �ּ��� : ");

    while ( n < N ) {
        scanf("%s", buffer);
        
        l = strlen(buffer);
        if (l > 0){
            /*char* newstrptr = (char*)malloc(sizeof(char) * (l + 1));      //malloc�� ���� buffer�� ����� ���̸�ŭ �Ҵ�
            strcpy(newstrptr, buffer);      //buffer�� ������ ī���Ͽ� ����
            unsortedBookName[n] = newstrptr;*/   //�� ���� unsortedBookName�� ����
            unsortedBookName[n] = strdup(buffer);   //strdup() �Լ��� ���� ����
            n++;
        } else {
            break;
        }
    }

    printf("������....\n");
    sortedBookName = bookSort(unsortedBookName, N);  //�����ϴ� �Լ� ȣ��
    printf("��� : ");

    for (int i = 0; i < N; i++)         //��� ���
    {
        printf("%s ", sortedBookName[i]);
    }

    return 0;
}

char **bookSort(char *a[], int N)       //å �̸� �迭�� å�� ������ �Ű������� �޾� �����ϴ� �Լ�
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (strncmp(a[i], a[j], 1) > 0)     //a[j]�� a[i]�� ù ���ں��� ���� ũ�� �� ����� ������ ��ȯ
            {
                a = swap(a, i, j);      //swap�Լ� ȣ��
            }
        }
    }
    return a;
}

char **swap(char *a[], int i, int j)  //�迭�� ����� ������ �ٲ��ִ� �Լ�
{
    char *temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    return a;
}
