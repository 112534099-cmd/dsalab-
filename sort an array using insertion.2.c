#include<stdio.h>
int main()
{
	int i,n,key,j;
	
	printf("enter number of elements:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter %d element:\n",n);
	for( i=0; i<n;i++)
	scanf("%d",&arr[i]);
	
	for( i=-1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
			
		}
		arr[j+1]=key;
	}
	
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	
	return 0;
}
