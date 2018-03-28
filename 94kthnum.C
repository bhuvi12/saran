#include<stdio.h>
#include<math.h>
int main()
{
int a[30],n,k,i;
printf("\n enter the k-thnum");
scanf("%d%d",&n,&k);
printf("\n array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n k-th element is:%d",a[--k]);
return 0;
}
