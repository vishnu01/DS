#include<stdio.h>
void main()
{
	int arr[10],n,i,j,temp;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d Elements: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nSorted Elements are\n");
	for (i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n\n");
}
