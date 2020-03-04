#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findPivot(int[], int, int);
int binarySearch(int[], int, int, int);


int pivotedBinarySearch(int arr[], int n, int key)
{
   int pivot = findPivot(arr, 0, n-1);


   if (pivot == -1)
       return binarySearch(arr, 0, n-1, key);

   if (arr[pivot] == key)
       return pivot;
   if (arr[0] <= key)
       return binarySearch(arr, 0, pivot-1, key);
   return binarySearch(arr, pivot+1, n-1, key);
}


int findPivot(int arr[], int low, int high)
{

   if (high < low)  return -1;
   if (high == low) return low;

   int mid = (low + high)/2;
   if (mid < high && arr[mid] > arr[mid + 1])
       return mid;
   if (mid > low && arr[mid] < arr[mid - 1])
       return (mid-1);
   if (arr[low] >= arr[mid])
       return findPivot(arr, low, mid-1);
   return findPivot(arr, mid + 1, high);
}

int binarySearch(int arr[], int low, int high, int key)
{
   if (high < low)
       return -1;
   int mid = (low + high)/2;
   if (key == arr[mid])
       return mid;
   if (key > arr[mid])
       return binarySearch(arr, (mid + 1), high, key);
   return binarySearch(arr, low, (mid -1), key);
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
	flag=pivotedBinarySearch(arr,n,ele);
	end=clock();
	printf("The number is at %d index:",flag+1);
    total=(double)(start-end)/CLOCKS_PER_SEC;
	printf("%f",total);
    return 0;
}
