//  Created by 엔류 on 2022/06/20.
//  피보나치 수열

#include <stdio.h>

int main(void)
{
    int last_value;
    
    printf("몇 번째 항까지 구할까요? : ");
    scanf("%d", &last_value);
    
    int n1 = 0, n2 = 1, n3;
    printf("%d, %d, ", n1, n2);
    for (int i = 2; i < last_value; i++)
    {
        n3 = n1 + n2;
        printf("%d, ", n3);
        n1 = n2;
        n2 = n3;
    }
    
    printf("\n");
    return 0;
}
