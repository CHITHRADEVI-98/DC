#include <stdio.h>


int main()

{
    
int i,max=-1,n, a[100];
    
scanf("%d",&n);

for(i=0;i<n;i++)
    
{
        
scanf("%d",&a[i]);
   
if(a[i]>max)
    
{
        
max=a[i];
    
}

}
printf("%d",max);

return 0;
}
