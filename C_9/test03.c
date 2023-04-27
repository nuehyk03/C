#include <stdio.h>

int main(void) {
    int x,y,result;
    printf("분자와 분모를 입력하시오:\n");
    scnaf("%d %d", &x, &y);

    if (y == 0) {
        printf("0으로 나눌 수 없습니다.\n");
    }
    else {
        result = x / y;
        printf("결과는 %d 입니다.\n", result);
    }
    return 0;
}