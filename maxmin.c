#include<stdio.h>
void maxmin(int a, int b, int *max, int *min);

int main()
{
    int a,b, max, min;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    maxmin(a,b, &max, &min);
    printf("max=%d min=%d",max,min);
    return 0;
}

void maxmin(int a, int b, int *max, int *min)
{
    if(a>b)
    {
        *max=a;
        *min=b;
    }
else
{
    *max=b;
    *min=a;
}
}
