#include<stdio.h>
main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	 int sum=0;
	   int i=0;
	  while(i<=n)
   {
   	 sum =sum+i;
   	 i++;
	   }	
	printf("the sum is %d",sum);
}
