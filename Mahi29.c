#include<stdio.h>
int main(){
	int n,h,m,s;
	printf("Enter seconds:");
	scanf("%d",&n);
	if(n>3600){
		min = n/60;
		sec = n%60;
		hr = min/60;
		min = min%60;
		printf("Converted format %d hour %d mins %d secs",h,m,s);
	}
	else{
		min = n/60;
		sec = n%60;
		printf("Converted format %d mins %d secs",m,s);
	}
}
