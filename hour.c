#include <stdio.h>

int main()
{
   int h,m,n;
   scanf("%d",&n);
   h=n/60;
   m=n-(h*60);
   printf("%d %d",h,m);

    return 0;
}
