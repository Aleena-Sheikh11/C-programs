#include<stdio.h>
int isPerfect(int n);

int main()
{
	int n;
	scanf("%d",&n);
	int perfect= isPerfect(n);
	if(perfect==1)
	printf("perfect number");
	else
	printf("not a perfect number");
	return 0;
}

int isPerfect(int n)
{
	int sum=0;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	return 1;
	else
	return 0;
}
