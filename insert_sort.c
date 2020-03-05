#include <stdio.h>
#include <stdlib.h>


void insr_sort(int arr[],int n)
{
	int key,i,j;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key){
		arr[j+1]=arr[j];
		j=j-1;
		}
	arr[j+1]=key;
	}
}

void main()
{
	int arr[10000];
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		arr[i]=rand()%n;
	}
	insr_sort(arr,n);
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
