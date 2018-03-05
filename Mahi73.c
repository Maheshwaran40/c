#include <stdio.h>
#include<conio.h>
int main() 
{
	int m,n,o;
	scanf("%d %d %d",&m,&n,&o);
	if(m>n)
	{
		if(m<o)
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
