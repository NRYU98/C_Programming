//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 5번

#include <stdio.h>

int main(void)
{
    int input;
    
    printf("정수를 입력하시오 : ");
    scanf("%d", &input);
    
    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
