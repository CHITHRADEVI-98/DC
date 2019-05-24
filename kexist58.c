#include <stdio.h>

int main()
{
    int n,k,i,a[50],count=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            count++;
        }
    }
    if(count!=0)
    printf("yes");
    else
   printf("No");
    return 0;
}
