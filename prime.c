#include<stdio.h>
int main()
{
int i,n,flag=1;
scanf("%d",&n);
for(i=2;i<=sqrt(n)/2;i++)
{
if(n%i==0)
{
flag=0;
break;
}
}
if(flag==1)
printf("yes");
else
printf("No");
}


