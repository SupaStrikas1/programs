#include<stdio.h>
void main()
{
	int n,i,j,temp,min;
	printf("Size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{	
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("Sorted Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
