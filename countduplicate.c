#include<stdio.h>
int main()
{
 int a[50];
 int i,j,size,duplicate=0;

  printf("Enter the size of array: ");
  scanf("%d",&size);

  printf("Enter the elements of array: ");
   for(i=0;i<size;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<size;i++)
    {
     for(j=i+1;j<size;j++)
     {
    
      if(a[i]==a[j])
      {
       duplicate=duplicate+1;
      }
     }
   }
      printf("\nThe number of duplicate elements in array is %d",duplicate);
       return 0;
}










