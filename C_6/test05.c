#include <stdio.h>

int main(void) {
    //10950번
    int n, i= 1;
    scanf("%d", &n);

    while (i <= n)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d", a+b);
        i++;
    }
    return 0;
}