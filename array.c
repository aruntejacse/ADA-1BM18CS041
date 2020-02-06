#include<stdio.h>
#include<stdlib.h>

void search(int arr[], int key , int n)
	{
	int flag,count=0,first=0,last=n-1,f_o,l_o;
	int middle=(first+last)/2;
	while(first<=last)
		{
		if(key>arr[middle])
			{
			first=middle;
			last=n-1;
			middle=(first+last)/2;
			}
		else if(key<arr[middle])
			{
			first = 0;
			last= middle;
			middle= (first+last)/2;
			}
		else
			{
			if(arr[middle]==key && arr[middle+1]>key)
				{
				f_o=middle;
				while(arr[middle]!=key)
				{
				count++;
				first=0;
				last=middle;
				middle=(first+last)/2;
				}
				l_o=middle;
				}
			else if(arr[middle]==key && arr[middle+1]>key)
				{
				l_o=middle;
				while(arr[middle]!=key)
				{
				count++;
				first=middle;
				last=n-1;
				middle=(first+last)/2;
				}
				f_o=middle;
				}
			else
				{
				while(arr[middle]!=key)
				{
				count++;
				first=0;
				last=middle;
				middle=(first+last)/2;
				}
				f_o=middle;
				while(arr[middle]!=key)
				{
				count++;
				first=middle;
				last=n-1;
				middle=(first+last)/2;
				}
				l_o=middle;
				}
			}
		}
		
void main()
	{
	int arr[100],n,key;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(int i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	printf("Enter the key:");
	scanf("%d",&key);
	search(arr[],key,n);
	}
	
	
	
	
	
	
	
	
	
					 
			
		
