//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 3번

#include <stdio.h>

int main(void)
{
    int input;
    
    printf("정수를 입력하시오 : ");
    scanf("%d", &input);
    
    printf("약수 : ");
    for (int i = 1; i <= input; i++)
        if (input % i == 0)
            printf("%d ", i);
    
    printf("\n");
    return 0;
}
