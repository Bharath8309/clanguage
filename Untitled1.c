#include<stdio.h>
main()
{  

int i,rem,sum=0;
	scanf("%d",&n);
	i=0;
	while(n>0)
	{ 
	rem=n%10;
	sum=usm+rem*pow(2,i);
	n=n/10;
	i++;
	}
   printf("%d",sum);	
}
