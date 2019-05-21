#include <stdio.h>


int main()

{
    
int i,j,fact=1;
    
scanf("%d",&j);
    
if(j<=0)
    
{
        
fact=1;
    
}
    
else
    
{
    
for(i=1;i<=j;i++)
    
fact=fact*i;
    
printf("%d",fact);
    
}

    
return 0;

}
