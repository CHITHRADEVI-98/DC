#include <stdio.h>


void main()

{
    
int i,min=0,n=10, a[100];
    
for(i=0;i<=10;i++)
    
{
        
scanf("%d",&a[i]);
}
min=a[0];

for(i=0;i<n;i++)
{
   
if(a[i]<min)
    
{
        
min=a[i];
    
}

}
printf("%d",min);
}
