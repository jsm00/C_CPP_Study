#include<stdio.h>
#include<stdbool.h>
//���簢���� �� ���� ���̰� �־����� 0-10�� �������� ������ ���� 
//���簢���� ���� �� �ִ��� �Ǻ�
double n; //���簢�� �� ���� ���̸� ���������� ����
bool canCover(double r){ //�־��� ���簢���� ���� r�� �������� ���� ���� �� �ִ��� �Ǻ��ϴ� �Լ�
    
    double radius_squared = 4*r*r; //���簢�� ������ ����
    double side_squared = 2*n*n; //���簢�� �� ���� ������ ��

    if(radius_squared>=side_squared) //��Ÿ��� ������ �̿��� ��� ��
        return true;
    else
        return false;
}

double minSquareCover(){ //���簢���� ���� �� �ִ� ���� ���� ���� ������ ��ȯ
    double minSquare =0, maxSquare =10; //�ִ�, �ּ� �������� ���� ����

    while(maxSquare-minSquare>1e-10){ //���� ������ �̿��Ͽ� �� ��ȯ
        double mid = (maxSquare+minSquare)/2; // ���� Ž���� Ȱ���Ͽ� ��� ����
        if(canCover(mid))
            maxSquare=mid;
        else
            minSquare=mid;
    }
    return minSquare;
}

int main()
{
    printf("���簢���� �Ѻ��� ���� �Է� : ");
    scanf("%lf",&n); //�Ѻ��� ���̸� �Է� ����

    double result = minSquareCover(); //��� ���� ������ ����

    printf("���� ���� ���� %lf�̴�.",result); //��� ���

    return 0;
}

