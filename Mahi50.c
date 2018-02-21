#include <stdio.h>
#include<conio.h>
int main() 
{
	int n,f=0,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	while(t!=1)
	{
		if(t%2!=0)
		{
			f=1;
			break;
			
		}
		t=t/2;
	}
	if(f==0)
	{
		printf("\n %d is a power of 2",n);
	}
	else if(f==1)
	{
		printf("\n %d is not a power of 2",n);
	}
	return 0;
}
