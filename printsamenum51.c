#include <stdio.h>

int main()
{
    int m,n,rev=0,rem=0,digit;
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    m=rev;
    while(m!=0)
    {
        rem=m%10;
        m=m/10;
        printf("%d ",rem);
    }
}
    
