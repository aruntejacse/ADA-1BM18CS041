#include<stdio.h>
#include<stdlib.h>

void search(int arr[], int key , int n)
	{
	int flag,count=0,first=0,last=n-1;
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
				count++;
				first=0;
				last=middle;
				middle=(first+last)/2;
				
					 
			
		
