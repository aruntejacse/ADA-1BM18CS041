#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[],int n)
{
    int i,j;
    int flag=1;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {   flag=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        if(flag==1)
        {
            printf("Sorted!");
            break;
        }
    }
    for(i=0;i<n;i++){
        printf(arr[i]);
    }
}
