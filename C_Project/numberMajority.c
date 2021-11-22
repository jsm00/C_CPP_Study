#include<stdio.h>
#include<stdlib.h>

int majority1(int *A, int N){
    int majority = -1, majorityCount = 0;
    for(int i=0; i<N; i++){
        int V=A[i], count=0; //ã�� ���� V�� ���� count�� 0���� �ʱ�ȭ
        for(int j=0; j<N; j++){
            if(A[j]==V) //V�� ���� �� ����� ++count
                ++count;
        }

        if(count>majorityCount){    //���ο� ���� count�� �� ũ�� majority�� ���� V�� ��ȯ
            majority=V;
            majorityCount=count;
        }
    }
    return majority; //���� ���� ���� �� ����
}

int main()
{
    int numberSet[] = {2,1,3,4,5,2,3,1,3,4,5,2,4,5,2,3,3,1,4,3,4,1,3,1,3}; // �迭 ����
    int size = sizeof(numberSet)/sizeof(numberSet[0]); // input ����
    
    int result = majority1(numberSet,size); // ���
   
    printf("��� : %d", result); //��� ���
    return 0;
}

// ���� input int�� ���� ī����