#include <stdio.h>
#include <stdlib.h>
//codeUp 그리디 문제(리모컨)
//현재온도와 목표온도가 주어졌을 때 최소한의 움직임으로 목표온도로 가는 문제

int main()
{
    int current_temperature, target_temperature;
    int total = 0;
    
    //현재온도와 목표온도를 입력받음
    scanf("%d %d", &current_temperature, &target_temperature); 

    //현재온도와 목표온도를 경우에 따라 나눠서 최소한의 움직임을 계산
    if (current_temperature < target_temperature)
    {
        total += (target_temperature - current_temperature) / 10;
        int c = (target_temperature - current_temperature) % 10;
        if (10 - c > c - 5)
        {
            if (c > 5 - c)
            {
                total += 1 + abs(5 - c);
            }
            else
            {
                total += c;
            }
        }
        else
        {
            total += 11 - c;
        }
        printf("%d", total);
    }
    else if (current_temperature > target_temperature)
    {
        total += (current_temperature - target_temperature) / 10;
        int c = (current_temperature - target_temperature) % 10;
        if (10 - c > c - 5)
        {
            if (c > 5 - c)
            {
                total += 1 + abs(5 - c);
            }
            else
            {
                total += c;
            }
        }
        else
        {
            total += 11 - c;
        }
        printf("%d", total);
    }
    else
    {
        printf("%d", total);
    }

    return 0;
}
