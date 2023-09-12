#include<stdio.h>
main(){
	int a;
	int b;
	printf("Enter two numbers:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("division %d",a/b);
	printf("division %f",a/b);
	printf("division %d",a/(float)b );
	printf("division %f",a/(float)b);
}
