#include <stdio.h>
int main(){

int i = 0;
int max = 0;
int sum = 0;
int count = -1;
float avg;

while(i>=0)
{
    sum = sum + i;
    count++;
    avg = (float)sum/count;
    printf("enter a no. :\n");
    scanf("%d", &i);
    if(i>max)
        max = i;

}
printf("max. no. is : %d\n", max);
printf("sum of no.s is : %d\n", sum);
printf("avg of no.s is : %f\n", avg);
}
