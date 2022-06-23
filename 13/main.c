//  Created by 엔류 on 2022/05/13.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    int guess_value, time = 0;
    int answer = rand() % 100;
    
    do
    {
        printf("정답 추측 : ");
        scanf("%d", &guess_value);
        time++;
        
        if (guess_value > answer)
            printf("땡! 더 낮은 값을 입력하세요.\n");
        if (guess_value < answer)
            printf("땡! 더 높은 값을 입력하세요.\n");
        printf("\n");
    } while (guess_value != answer);
    
    printf("정답 : %d, 시도 횟수 : %d\n", answer, time);
    
    return 0;
}
