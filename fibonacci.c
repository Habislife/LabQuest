#include<stdio.h>
int main()
{
 int a[10],i;
  a[0]=0;
  a[1]=1;

 for(i=2;i<10;i++)
 {
  a[i]=a[i-2]+a[i-1];
 }
   for(i=0;i<10;i++)
    
     printf("The first 10 fibonacci numbers are %d\n",a[i]);
     return 0;
    
}
  

  
  
