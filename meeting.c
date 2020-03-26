
#include <stdio.h>
#include <stdlib.h>

void sort(int a[],int b[],int n)
{
    int temp,tempb,bele,small,pos;
	for(int i=0;i<n-1;i++)
	{
		bele=b[i];
		small=a[i];
		pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				bele=b[j];
				small=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
		tempb=b[i];
		b[i]=b[pos];
		b[pos]=tempb;
	}
}



void main()
{
	int n,s[100],f[100],resst[100],resf[100],mnum[100];
	int ks,kf;
	int flag[100];
	printf("Enter the number of meetings:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the starting time:\n");
		scanf("%d",&s[i]);
		printf("Enter the finishing time:\n");
		scanf("%d",&f[i]);
	}
	sort(f,s,n);
	resst[0]=s[0];
	resf[0]=f[0];
	kf=0;
	ks=0;
	mnum[0]=1;
	for(int i=1;i<n;i++)
	{
		if(s[i]>resf[kf])
		{
			resst[++ks]=s[i];
			resf[++kf]=f[i];
			mnum[ks]=i+1;
		}
	}
	printf("Maximum number of meeting:%d",ks+1);
}
