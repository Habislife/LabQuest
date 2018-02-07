#include<stdio.h>
int main()	
{
	char a[50],b[50]="ABEIOS",c[50]="483105";
	int i=0,j;
	
	printf("Enter the sentence: ");
	gets(a);//for storing value
	
	while(a[i]!='\0')
	{
		if(a[i]>=97 && a[i]<=122)
		a[i]-=32;//for converting lower-case to upper-case
		
		for(j=0;j<6;j++)
		{
		   if(a[i]==b[j])
			a[i]=c[j];//for interchanging elements of array b & c
		}
		i=i+1;
	}
	printf("In B1FF speak: %s !!!!!!!!",a);//for printing value
	return 0;
}
