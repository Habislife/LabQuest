//printing sum of rows and colums
#include<stdio.h>
int main()
{
   int a[5][5],i,j,sum;
   
   for(i=0;i<5;i++)
   {
    printf("Enter Rows %d: ",i+1);
    for(j=0;j<5;j++)
    scanf("%d",&a[i][j]);
   }//for storing value
   	
   	printf("\nTotal Rows: ");
   	for(i=0;i<5;i++)
   	{
   		sum=0;
   		for(j=0;j<5;j++)
   		sum+=a[i][j];
   		printf("%d ",sum);
	}//for calculating sums of rows
	
	printf("\nTotal Columns: ");
	for(i=0;i<5;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		sum+=a[i][j];
		printf("%d ",sum);
	}//for calculating the sums of columns
	
	return 0;  	
}
