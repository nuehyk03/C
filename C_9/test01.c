#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    int x,y;
    printf("첫번째 숫자를 입력하시오:\n");
    scanf("%d", &x);
    printf("두번째 숫자를 입력하시오:\n");
    scanf("%d", &y);
    printf("두 수의 합: %d", x+y);
    return 0;
}