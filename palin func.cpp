#include<stdio.h>
int isPalindrome(int n);

int main()
{
	int n;
	scanf("%d",&n);
	int palin= isPalindrome(n);
	if(palin==1)
	printf("palindrome number");
	else
	printf("not");
	return 0;
}

int isPalindrome(int n)
{
	int b;
	int a=n;
	int s=0;
	while(a>0)
	{
		b= a%10;
		s= s*10+b;
		a=a/10;
	}
	if(s==n)
	return 1;
	else
	return 0;
}
