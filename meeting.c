#include <stdio.h>
#include <stdlib.h>

void sort(int s[],int f[],int n)
{
	int key,i,j;
	for(i=1;i<n;i++){
		key=f[i];
		j=i-1;
		
		while(j>=0 && f[j]>key){
		f[j+1]=f[j];
		j=j-1;
		}
	f[j+1]=key;
	
	}
}



void main()
{
	int n,s[100],f[100];
	int st,ft;
	int flag[100];
	printf("Enter the number of meetings:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the starting time:");
		s[100]=scanf("%d",&st);
		printf("Enter the finishing time:");
		f[100]=scanf("%d",&ft);
	}
	sort(s,f,n);	
}

