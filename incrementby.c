#include<stdio.h>
void incrementby(int *num, int step);

int main()
{
    int s,n;
    printf("enter the number of steps to add to a number");
    scanf("%d %d", &s,&n);
    printf("before increment %d\n", n);
    incrementby(&n, s);
    printf("after increment %d\n", n);
    return 0;
}

void incrementby(int *num, int step)
{
    *num += step;
}