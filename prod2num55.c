#include<stdio.h>
void main()
{
    int n,m,prod;
    scanf("%d %d",&m,&n);
    prod=m*n;
    if(prod%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
