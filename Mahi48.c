#include <stdio.h>
#include<conio.h>
int main() 
{
	int i,n,a[50],s=0,v;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	v=s/n;
	printf("\n%d",sum);
	printf("\n%d",avg);
	return 0;
}
