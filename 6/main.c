//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 6번

#include <stdio.h>

int main(void)
{
    char op;
    int val1, val2;
    double result;
    
    while (1)
    {
        printf("*********************\n");
        printf("A -------- Add\n");
        printf("S -------- Subtract\n");
        printf("M -------- Multiply\n");
        printf("D -------- Divide\n");
        printf("Q -------- Quit\n");
        printf("*********************\n\n");
        
        printf("연산을 선택하시오 : ");
        scanf(" %c", &op);
        
        if (op == 'A')
        {
            printf("두 수를 공백으로 분리해 입력하시오 : ");
            scanf("%d %d", &val1, &val2);
            result = val1 + val2;
            printf("결과 : %.2lf\n\n", result);
        }
        else if (op == 'S')
        {
            printf("두 수를 공백으로 분리해 입력하시오 : ");
            scanf("%d %d", &val1, &val2);
            result = val1 - val2;
            printf("결과 : %.2lf\n\n", result);
        }
        else if (op == 'M')
        {
            printf("두 수를 공백으로 분리해 입력하시오 : ");
            scanf("%d %d", &val1, &val2);
            result = val1 * val2;
            printf("결과 : %.2lf\n\n", result);
        }
        else if (op == 'D')
        {
            printf("두 수를 공백으로 분리해 입력하시오 : ");
            scanf("%d %d", &val1, &val2);
            result = val1 / val2;
            printf("결과 : %.2lf\n\n", result);
        }
        else if (op == 'Q')
            break;
        else
            printf("잘못 입력하였습니다. (A, S, D, Q 중 선택)\n\n");
    }
    
    printf("\n");
    return 0;
}
