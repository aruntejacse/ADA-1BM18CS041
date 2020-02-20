#include<stdio.h>

int fibn(int n)
	{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		{
		return fibn(n-1)+fibn(n-2);
		}
	}
	
	
void main()
	{
	int n,res;
	printf("Enter the number:");
	scanf("%d",&n);
	res = fibn(n);
	printf("%d\n",res);
	}
