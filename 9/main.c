//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 9번

#include <stdio.h>

int main(void)
{
    int max, sum = 0;
    
    for (int i = 1; ; i++)
    {
        sum += i;
        if (sum > 10000)
        {
            sum -= i;
            max = i - 1;
            break;
        }
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", max, sum);
    
    printf("\n");
    return 0;
}
