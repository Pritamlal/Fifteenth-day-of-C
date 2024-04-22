#include<stdio.h>
int main()
{
	int arr[100],n,sum=0,i;
	printf("Enter the size::");
	scanf("%d",&n);
	printf("Enter the elements::");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		sum=sum+arr[i];
		
	}
	printf("Sum is %d",sum);
	
}
