#include <stdio.h>

int main(void) {
    int i = 0;

    do {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("4---종료\n");
        printf("하나를 선택하시오.\n");
        scanf("%d", &i);

    }
    while(i != 4);
    printf("선택된 매뉴= %d\n", i);
    return 0;
}