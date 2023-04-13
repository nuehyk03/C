#include <stdio.h>

//백준알고리즘 10952
int main(void) {
  
     while (1)
    {
        int a, b;
        printf("입력하고 싶은 값:\n");
        scanf("%d %d", &a, &b);

        if (a == 0, b== 0) {
            break;
        }
        printf("%d\n", a+b);
    }
    return 0;
}