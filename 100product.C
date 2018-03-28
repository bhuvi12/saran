#include<stdio.h>
int main()
{
int mul=1,num,a,i;
scanf("%d",&num);
while(num>0)
{
a=num%10;
num=num/10;
mul=mul*a;
}
printf("\n the product is:%d",mul);
return 0;
}
