#include<stdio.h>
void merge(int a[],int b[],int n,int m)
{
	int c[n+m];
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while(i<n && j<m)
	{
		if(a[i]<=b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<n)
	{
		c[k++]=a[i++];
	}
	while(j<m)
	{
		c[k++]=b[j++];
	}
	printf("Sorted Array: ");
	for(i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
}
void main()
{
	int n,m,i;
	printf("Size of both array: ");
	scanf("%d%d",&n,&m);
	int L[n],R[m];
	printf("Enter Elements of Array 1: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&L[i]);
	}
	printf("Enter Elements of Array 2: ");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&R[i]);
	}
	merge(L,R,n,m);
}
