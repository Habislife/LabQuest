//Reverse a series of Numbers
#include<stdio.h>
int main()
{
	int a[10],i ;
	
	//for storing value
	printf("Enter any 10 numbers :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//for printing reversed series of numbers
	printf("The reversed series of numbers are :\n");
	for(i=9;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0 ;
}
