//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 11번

#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    
    printf("n의 값 : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
        sum += i * i;

    printf("계산값 : %d\n", sum);
    printf("\n");
    return 0;
}
