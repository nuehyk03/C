#include <stdio.h>
#define STUDENTS 10
int main(void)
{
    int scores[STUDENTS];
int sum = 0;
int i, average;
for (i = 0; i < STUDENTS; i++)
{
    printf("학생들의 성적을 입력하시오: ");
    scanf("%d", &scores[i]); //중요
    //&scores[0] = scores
}
for (i = 0; i < STUDENTS; i++)
{
    sum += scores[i];
}
average = sum / STUDENTS;
printf("성적 평균= %d\n", average); //오류
return 0;
}