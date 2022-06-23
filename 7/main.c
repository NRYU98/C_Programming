//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 7번

#include <stdio.h>

int main(void)
{
    int sum;
    
    printf("2와 100사이의 모든 소수 : ");
    for (int i = 2; i < 100; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                sum++;
        if (sum == 2)
            printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}
