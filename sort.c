#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void bubblesort(int arr[],int n)	
	{
	int temp;
	for(int i =0;i<n;i++)
		{
		for(int j = 0;j<n-i-1;j++)
			{
			if(arr[i]>arr[j])
				{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
			}
		}
	for(int i=0;i<n;i++)
		{
		printf("%d \n",arr[i]);
		}
	}

void main()
	{
	clock_t start,end,ran;
	double total;
	int arr[10000],n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Entering the elements...\n");
	for(int i =0;i<n;i++)
		{
		ran = rand()%100;
		arr[i]=ran;
		}
	start = clock();
	bubblesort(arr,n);
	end=clock();
	total=(double)(start-end)/CLOCKS_PER_SEC;
	printf("%f",total);
	}
	
	
