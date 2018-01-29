#include<stdio.h>
int main()
{
	int a[]={1,2,6,8,100};
	int i,j,diff=0;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]-a[i]>diff)
			diff=a[j]-a[i];
		}
	}
	printf("The maximum difference is %d",diff);
	return 0;
}
