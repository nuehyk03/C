#include <stdio.h>

int main(void) {
    int i,n;
    printf("출력하고 싶은 단:");
    scanf("%d", &n);
    for(i = 1; i <10; i++) {
       
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}