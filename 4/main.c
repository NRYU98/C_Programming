//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 4번

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 6 - i; j > 0; j--)
            printf(" ");
        
        for (int k = 0; k <= i; k++)
            printf("*");
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
