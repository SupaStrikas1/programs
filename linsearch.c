#include<stdio.h>
void main()
{
	int n,key,i;
	printf("Size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Element to Search: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d Found at Position %d\n",key,i+1);
			break;		
		}
	}
	if(i>=n)
	{
		printf("Element Does Not Exist\n");
	}
}
