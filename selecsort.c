#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void selection_sort(int arr[],int n)
	{
	int temp,small,pos;
	for(int i =0;i<n;i++)
		{
		small=arr[i];
		pos=i;
		for(int j=i+1;j<=n;j++)
			{
			if(arr[j]<small){
				small=arr[j];
				pos=j;
				}
			}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
		}
	}
	
void main()
	{
	int n,arr[100000];
	clock_t start,end;
	double total;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(int i =0;i<n;i++)
		{
		arr[i]=rand()%n;
		}
	start=clock();
	selection_sort(arr,n);
	end=clock();
	for(int i =0;i<n;i++)
		{
		printf("%d\n",arr[i]);
		}	
	total=(double)(start-end)/CLOCKS_PER_SEC;
	printf("%f",total);
	}
	
	
	
	
	
	
	
