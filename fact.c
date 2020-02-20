#include<stdio.h>

int fact(int n)
	{
	if(n==1)
		{
		return 1;
		}
	else
		{
		return n*fact(n-1);
		}
	}

void main()
	{
	int n,res;
	printf("Enter the number:");
	scanf("%d",&n);
	res=fact(n);
	printf("%d\n",res);
	}
