#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rec_lin(int arr[],int f,int n,int ele)
{
    if(n<f)
        return -1;
    if(arr[f]==ele)
        return f;
    if(arr[n]==ele)
        return n;
    return rec_lin(arr,f+1,n-1,ele);
}

int main()
{
    int ele,arr[10000];
    int n,flag;
    clock_t start,end;
    double total;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	printf("Enter key:");
	scanf("%d",&ele);
	start = clock();
	flag=rec_lin(arr,0,n-1,ele);
	end=clock();
	printf("The number is at %d index:",flag+1);
    total=(double)(start-end)/CLOCKS_PER_SEC;
	printf("%f",total);
    return 0;
}
