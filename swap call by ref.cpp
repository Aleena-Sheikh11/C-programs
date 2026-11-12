#include <stdio.h>
//function definition to swap the values
void swap(int *x, int *y);
 
int main()
{
	int a= 34;
	int b= 74;
	printf("%d and %d\n", a, b);
	swap(&a, &b);
	printf("%d and %d\n", a, b);
	return 0;
}

void swap (int *x, int *y)
{
	int temp;
	temp = *x;
	*x= *y;
	*y= temp;
	return;
}
