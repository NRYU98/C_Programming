//  Created by 엔류 on 2022/06/20.
//

#include <stdio.h>

int main(void)
{
    int x, y, quadrant;
    
    printf("좌표 (x, y) : ");
    scanf("%d %d", &x, &y);
    
    quadrant = x > 0 ? (y > 0 ? 1 : 4) : (y > 0 ? 2 : 3);
    
    if (x > 0)
    {
        if (y > 0)
            printf("1사분면\n");
        else
            printf("4사분면\n");
    }
    else
    {
        if (y > 0)
            printf("2사분면\n");
        else
            printf("3사분면\n");
    }
    printf("%d사분면\n", quadrant);
    printf("n");
    return 0;
}
