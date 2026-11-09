#include<stdio.h>

int main()
{
	printf("lets learn about pointers\n");
	int a=76;
	int *ptr = &a;
	printf("the address of pointer to a is= %x\n", &ptr);
	printf("the address of a is= %x\n",ptr);
	printf("another way of printing address of a is= %x\n", &a);
	printf("the value stored in pointer to a is= %x\n", ptr);
	printf("the value of a is= %d\n", *ptr);
	printf("another way of writing the value stored in a is= %d\n", a);
	return 0;
}
