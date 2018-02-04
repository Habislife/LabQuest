#include<stdio.h>
int main()
{
int a[10] , temp[50] ;
int i ;

//for storing the values
printf(" Enter the numbers:") ;
 for(i=0 ; i<10 ; i++)
 scanf("%d" , &a[i]) ;

//for swapping the neighbour numbers
for(i=0 ; i<10 ; i=i+2) 
{ 
   temp[i]=a[i] ;
   a[i]=a[i+1] ;
   a[i+1]=temp[i] ;
}

//for printing the swapped values
printf("The swapped values are:") ;
for(i=0 ; i<10 ; i++) 
printf("%d ",a[i]) ;

return 0 ;

}
