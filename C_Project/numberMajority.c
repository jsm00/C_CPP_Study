#include<stdio.h>
#include<stdlib.h>

int majority1(int *A, int N){
    int majority = -1, majorityCount = 0;
    for(int i=0; i<N; i++){
        int V=A[i], count=0; //찾는 값을 V에 저장 count는 0으로 초기화
        for(int j=0; j<N; j++){
            if(A[j]==V) //V와 같은 값 존재시 ++count
                ++count;
        }

        if(count>majorityCount){    //새로운 값을 count가 더 크면 majority의 값을 V로 변환
            majority=V;
            majorityCount=count;
        }
    }
    return majority; //가장 많이 나온 값 도출
}

int main()
{
    int numberSet[] = {2,1,3,4,5,2,3,1,3,4,5,2,4,5,2,3,3,1,4,3,4,1,3,1,3}; // 배열 선언
    int size = sizeof(numberSet)/sizeof(numberSet[0]); // input 갯수
    
    int result = majority1(numberSet,size); // 계산
   
    printf("결과 : %d", result); //결과 출력
    return 0;
}

// 문제 input int값 갯수 카운팅