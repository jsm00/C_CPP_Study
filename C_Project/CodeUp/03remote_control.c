#include <stdio.h>
#include <stdlib.h>
//codeUp �׸��� ����(������)
//����µ��� ��ǥ�µ��� �־����� �� �ּ����� ���������� ��ǥ�µ��� ���� ����

int main()
{
    int current_temperature, target_temperature;
    int total = 0;
    
    //����µ��� ��ǥ�µ��� �Է¹���
    scanf("%d %d", &current_temperature, &target_temperature); 

    //����µ��� ��ǥ�µ��� ��쿡 ���� ������ �ּ����� �������� ���
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
