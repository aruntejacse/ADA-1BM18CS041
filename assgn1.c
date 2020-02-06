#include<stdio.h>
#include<stdlib.h>

void toh(int n, char start, char med, char last)
	{
	if(n==1)
		{
		printf("Moved %d disc from %c to %c\n",n,start,last);
		}
	else
		{
		toh(n-1,start,last,med);
		printf("Moved %d disc from %c rod to %c rod\n",n,start,last);
		toh(n-1,med,start,last);
		}
	}

void main()
	{
	int n;
	printf("Enter the number of discs:");
	scanf("%d",&n);
	toh(n,'A','B','C');
	}
