#include<stdio.h>
#define SIZE 20
void main()
{
	int a[SIZE],i,p=0,n=0,z=0,siz;
	printf("Enter Number of Integers you want to Enter:");
	scanf("%d",&siz);
	printf("Enter Numbers : ");
	for (i=0;i<siz;i++)
	scanf("%d",&a[i]);
	for(i=0;i<siz;i++)
	{
		if(a[i]>0)
		p+=1;
		else if(a[i]<0)
		n+=1;
		else
		z+=1;		
	}

printf("\nPositive Num :%d",p);
printf("\nNegative Num :%d",n);
printf("\nZero :%d\n\n",z);
	

}












