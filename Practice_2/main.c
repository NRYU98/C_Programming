//  Created by 엔류 on 2022/06/18.
//

#include <stdio.h>

int main(void)
{
    int i, j, insert, sum;
    
    while (1)
    {
        printf("양의 정수 또는 0(종료)을 입력 : ");
        scanf("%d", &insert);
        
        if (!insert)
            break;
        
        for (i = 1; i <= insert; i++)
        {
            sum = 0;
            for (j = 1; j <= i; j++)
            {
                sum += j;
                if (j == i)
                    break;
                printf("%d + ", j);
            }
            if (i == 1)
                printf("1 = 1\n");
            else
                printf("%d = %d\n", j, sum);
        }
    }
    
    printf("\n");
    return 0;
}
