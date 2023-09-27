#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int part(int a[],int f,int l)
{
	int pivot=a[l];
	int i=f-1;
	for(int j=f;j<l;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[l]);
	return i+1;
}
void quicksort(int a[],int f,int l)
{
	if(f<l)
	{
		int pind=part(a,f,l);
		quicksort(a,f,pind-1);
		quicksort(a,pind+1,l);
	}
}
void main()
{
	int n,i;
	printf("Size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("Sorted Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
