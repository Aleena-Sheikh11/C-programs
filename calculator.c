#include<stdio.h>
void calculator(int a, int b, int *sum, int *diff, int *product);

int main()
{
    int a,b,sum,diff,product;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    calculator(a,b,&sum,&diff,&product);
    printf("sum=%d diff=%d product=%d",sum,diff,product);
    return 0;
}

void calculator(int a, int b, int *sum, int *diff, int *product)
{
    *sum = a+b;
    *diff = a-b;
    *product = a*b;
}