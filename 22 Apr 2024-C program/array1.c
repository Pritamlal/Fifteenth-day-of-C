#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("Enter the size of array::");
	scanf("%d",&n);
	printf("Enter the element::");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
}
