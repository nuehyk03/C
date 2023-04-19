#include <stdio.h>

int main(void) {
    //1부터 n까지의 합 계산
    int i= 1, n, sum=0;
    printf("정수를 입력하시오:");
    scanf("%d", &n);
    
    while(i <= n) {
        sum+= i; // sum = sum +i;와 같다.
        i ++;
    }
    printf("1부터 %d까지의 합은 %d입니다.",n, sum);
    return 0;
}
