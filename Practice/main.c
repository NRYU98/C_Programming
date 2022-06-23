//  Created by 엔류 on 2022/06/18.
//  풍차 알고리즘

#include <stdio.h>

int main()
{
    int length;
    
    printf("바람개비 한 변의 길이 : ");
    scanf("%d", &length);
    
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int k = 0; k <= length - i; k++)
            printf(" ");
        for (int l = 0; l <= length - i; l++)
            printf("*");
        printf("\n");
    }
    for (int m = 1; m <= length; m++)
    {
        for (int a = 1; a <= length - m; a++)
            printf(" ");
        for (int b = 1; b <= m; b++)
            printf("*");
        for (int c = 1; c <= m; c++)
            printf(" ");
        for (int d = 0; d <= length - m; d++)
            printf("*");
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
