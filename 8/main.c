//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 8번

#include <stdio.h>

int main(void)
{
    int height = 0;
    
    while (height != -1)
    {
        printf("막대의 높이 : ");
        scanf("%d", &height);
        
        for (int i = 0; i < height; i++)
            printf("*");
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
