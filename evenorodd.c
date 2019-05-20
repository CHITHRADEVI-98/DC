#include <stdio.h>

void main()
{
	int num;
	scanf("%d",&num);
	if(num%2==0)
		printf("even",num);
	else if(num%2==1)
		printf(" odd",num);
	else
		printf("invalid");
}
