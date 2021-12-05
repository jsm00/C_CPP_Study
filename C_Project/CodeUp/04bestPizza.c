#include <stdio.h>
#include <stdlib.h>
//codeUp �׸��� ����(�ְ��� ����)
//������ ����� ������ ���� 1�޷��� ����(calorie)�� �ִ� �� ���ϱ�

int *sort(int *topping_cal, int N); //�Լ� �̸� ����
int *swap(int *topping_cal, int i, int j);

int main()
{
    int *topping_cal;     //�� ������ ������ ������ �迭
    int N, doughprice, toppingprice, dough_cal; //�� ���� ����

    scanf("%d", &N);
    scanf("%d %d", doughprice, &toppingprice);      //������� �Է¹���
    scanf("%d", &dough_cal);
    topping_cal = (int *)malloc(N * sizeof(int));     //�Է� ���� ������ŭ malloc�� ���� ���� �Ҵ�
    int totalCal = dough_cal;       //����� �׻� �ʿ��ϹǷ� ���� Į�θ��� ���� ������ �߰�
    int totalPrice = doughprice;    
    for (int i = 0; i < N; i++)     //�� ������ Į�θ� �Է¹ޱ�
    {
        scanf("%d", &topping_cal[i]);
    }
    topping_cal = sort(topping_cal, N);  //���� Į�θ��� ������������ ����
    for (int i = 0; i < N; i++)
    {
        if (totalCal / totalPrice <= (totalCal + topping_cal[i]) / (totalPrice + toppingprice)) 
        {   //1�޷� �� ������ �������� ������ �߰� ���� �� �� ������ 
            //���� ���ݰ� ���� Į�θ��� �� ������ ����
            totalPrice += toppingprice;
            totalCal += topping_cal[i];
        }
    }

    printf("%d", totalCal / totalPrice); //��� ���

    return 0;
}

int *sort(int *topping_cal, int N)  //�������� ���� �Լ�
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

int *swap(int *topping_cal, int i, int j)   //�迭 ����� ������ �ٲ��ִ� �Լ�
{
    int temp = topping_cal[i];
    topping_cal[i] = topping_cal[j];
    topping_cal[j] = temp;

    return topping_cal;
}