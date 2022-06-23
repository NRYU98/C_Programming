//  Created by 엔류 on 2022/05/13.
//  7장 연습문제 10번

#include <stdio.h>

int main(void)
{
    double r, result = 1;
    int time;
    
    printf("실수의 값을 입력하시오 : ");
    scanf("%lf", &r);
    printf("거듭제곱 횟수를 입력하시오 : ");
    scanf("%d", &time);
    
    for (int i = 0; i < time; i++)
        result *= r;
    
    printf("\n결과 : %.2lf\n", result);
        
    printf("\n");
    return 0;
}
