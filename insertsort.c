#include<stdio.h>
void main()
{
	int n,i,j,temp,c;
	printf("Size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		c=a[i];
		j=i-1;
		while(j>=0 && c<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=c;
	}
	printf("Sorted Array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
