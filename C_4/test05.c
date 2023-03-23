#include <stdio.h>

int main(void)
{
    //세자리수 * 세자리수
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);

    int n3 = n1 * (n2% 10);
    int n4 = n1 * (n2 /10 % 10);
    int n5 = n1 * (n2/ 100);

    printf("%d\n", n3);

    return 0;
}