#include <stdio.h>

int main(void) {
    int i= 1, n, sum=0;
    //n이하의 짝수의 합
    
    printf("정수를 입력하시오:");
    scanf("%d", &n);
    
    while(i <= n) {
        if (i % 2 == 0) {
        sum+= i;}
        else {
        i ++; }
    }
    printf("1부터 %d까지의 짝수합은 %d입니다.",n, sum);
    return 0;
}
