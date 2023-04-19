#include <stdio.h>

int main(void)
{
    //백준 2558
    //세자리수 * 세자리수
    int n1; 
    int n2;
    printf("두개의 세자리수를 입력하세요:");
    scanf("%d %d", &n1, &n2);

    int n3 = n1 * (n2 % 10); //10으로 나눈 나머지 값
    int n4 = n1 * (n2 / 10 % 10); 
    int n5 = n1 * (n2 / 100);
    int n6 = (n5 * 100) + (n4 * 10) + n3;

    printf("%d\n", n3);
    printf("%d\n", n4);
    printf("%d\n", n5);
    printf("%d\n", n6);

    

    return 0;
}
