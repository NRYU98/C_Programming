//  Created by 엔류 on 2022/05/13.
// 사용자로부터 값을 받아 그 값까지의 합을 구하는 프로그램

#include <stdio.h>

int main(void)
{
    int input, sum = 0;
    
    printf("마지막 값 : ");
    scanf("%d", &input);
    
    for (int i = 1; i <= input; i++)
        sum += i;
    
    printf("총합 : %d\n", sum);
    
    printf("\n");
    return 0;
}
