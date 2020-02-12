#include<stdio.h>
#include<stdlib.h>

int first_occ(int arr[], int key , int n)
	{
	int first=0,last=n-1,mid,f_o=-1;
	while(first<=last)
        {
            mid=(first+last)/2;
            if(arr[mid]==key){
                f_o= mid;
                last = mid-1;
            }
            else if(key>arr[mid]){
                first = mid+1;
            }
            else{
                last = mid -1;
            }
        }
    return f_o;
	}
int last_occ(int arr[], int key , int n)
    {
        int l_o=-1,first=0,last=n-1,mid;
        while(first<=last){
            mid = (first+last)/2;
            if(arr[mid]==key){
			l_o=mid;
			first=mid+1;
            }
            else if(key>arr[mid]){
			first=mid+1;
            }
            else {
			last=mid-1;
            }
        }
    return l_o;
    }

int main()
	{
	int arr[100],n,key,fir_occ,las_occ,count=-1;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(int i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	printf("Enter the key:");
	scanf("%d",&key);
	fir_occ = first_occ(arr,key,n);
	las_occ = last_occ(arr,key,n);
	count = las_occ - fir_occ;
	printf("%d\n",fir_occ);
	printf("%d\n",las_occ);
	printf("%d",count+1);
	return 0;
	}
