#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rec_biny(int arr[],int f,int l,int key)
	{
	int mid;
	mid=(f+l)/2;
	while(f<=l)
		{
		if(key==arr[mid])
			{
			return 1;	
			}
		else if(key>arr[mid])
			{
			return rec_biny(arr,mid+1,l,key);
			}
		else
			{
			return rec_biny(arr,f,mid-1,key);
			}
			
		}
	}
	
void main()
	{
	int n,arr[10000],key,ran,flag=0;
	clock_t start,end;
	double total;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(int i =0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	printf("Enter key:");
	scanf("%d",&key);
	start = clock();
	flag=rec_biny(arr,0,n-1,key);
	end=clock();
	if(flag)
		{
		printf("Found");
		}
	else
		{
		printf("Not Found");
		}
	total=(double)(start-end)/CLOCKS_PER_SEC;
	printf("%f",total);
	}
	
	
