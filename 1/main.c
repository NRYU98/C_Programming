//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 1번

#include <stdio.h>

int main(void)
{
    int initial_value;
    
    printf("카운터의 초기값을 입력하시오 : ");
    scanf("%d", &initial_value);
    
    for (int i = initial_value; i > 0; i--)
        printf("%d ", i);
    printf("\a");
    
    
    printf("\n");
    return 0;
}
