#include<stdio.h>
void main()
{
	int n,key,i,l,r,mid;
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
	l=0;
	r=n-1;
	while(l<=r)
	{	
		mid=(l+r)/2;
		if(a[mid]==key)
		{
			printf("%d Found at Position %d\n",key,mid+1);
			break;
		}
		else if(a[mid]>key)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
		
	}
	if(l>r)
	{
		printf("Element Does Not Exist\n");
	}
}
