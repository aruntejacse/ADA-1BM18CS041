#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void lar(int arr[],int n,int k)
	{
	int temp,max,pos;
	for(int i =0;i<n;i++)
		{
		max=arr[i];
		pos=i;
		for(int j=i+1;j<=n;j++)
			{
			if(arr[j]>max)
				{
				max=arr[j];
				pos=j;
				}
			}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
		}
	for(int i =0;i<k;i++)
		{
		printf("%d\n",arr[i]);
		}
	}
	
void main()
	{
	int arr[100000],n,k;
	clock_t start,end;
	double total;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(int i =0;i<n;i++)
		{
		arr[i]=rand()%n;
		}
	printf("Enter the 'k' number:");
	scanf("%d",&k);
	start = clock();
	lar(arr,n,k);
	end = clock();
	total = (double)
	(start-end)/CLOCKS_PER_SEC;
	printf("%f",total);	
	}
	
	
	
	
	
	
