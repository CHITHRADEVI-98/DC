#include <stdio.h>
#include<ctype.h>

int main()
{
    char b;
    scanf("%c",&b);
    if(isdigit(b))
    printf("yes");
    else
    printf("No");

    return 0;
}
