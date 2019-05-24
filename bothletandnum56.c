#include<stdio.h>
#include<string.h>
void main()
{
   char a[100],i,w=0,n=0;
   scanf("%s",&a);
   while(a[i]!=0)
   {
       if(a[i]>=97&&a[i]<=122||a[i]>=65&&a[i]<=90)
       {
           w=w+1;
       }
       else if(a[i]>=48&&a[i]<=57)
        {
            n=n+1;
        }
        i++;
    }
    if(w==0||n==0)
    {
    printf("No");
    }
    else
    {
        printf("Yes");
    }
}
