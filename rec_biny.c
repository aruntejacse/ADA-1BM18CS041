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
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(int i =0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	printf("Enter key:");
	scanf("%d",&key);
	flag=rec_biny(arr,0,n-1,key);
	if(flag)
		{
		printf("Found");
		}
	else
		{
		printf("Not Found");
		}
	}
	
	
