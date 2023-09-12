//With return type and no argument type
#include<stdio.h>

int add();//declaration
main()
{
add();//calling
}
int add()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d",&a);
scanf("%d",&b);
printf("The Sum is %d\n",a+b);
return(1);
}
