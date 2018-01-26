#include<stdio.h>
int main()
{
 int a[4];
 int i,sum=0;
  for(i=0;i<4;i++)
  {
   printf("Enter the number of array:");
   scanf("%d",&a[i]);
  }
   for(i=0;i<4;i++)
   {
       sum=sum+a[i];
   }
    printf("\nThe sum of entered number of array is %d",sum);
   
    return 0;
}

