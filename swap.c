#include<stdio.h>
void swap(int *a, int *b);

void main()
{
	int x,y;
	scanf("%d %d", &x, &y);
	printf("values before swap: x=%d  y=%d",x,y);
	swap(&x,&y);
	printf("\n Values after swap: x=%d  y=%d",x,y);
}

void swap(int *a, int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
