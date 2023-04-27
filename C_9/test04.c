#include <stdio.h>

int main(void) {
    int i, years;
    double total, rate, investment;
   printf("원금 : \n");
   scnaf("%lf", &investment);
   printf("이율 : \n");
   scanf("%lf", &rate);
   printf("기간(년) :\n");
   scanf("%d", &years);

   printf("===============\n");
   printf("연도 원리금\n");
   printf("===============\n");
   total = investment;
   rate /= 100.0;

   for(i = 0; i < years; i++) {
    total = total* (1 + rate);
    printf("%2d        %10.1f\n", i + 1, total);
    }
    return 0;
}