#include<stdio.h>

int main()
{
    int a,b,c,d,e;
 scanf("%d",&a);


   for(b=1;b<=a;b++)
    {


for(c=1;c<=4*a-3;c++){
if( c-b==a-1 || b+c==3*a-1 || c-b==3*a-3 || b+c==a+1)
    printf("*");
    else printf(" ");
    }
    printf("\n");
    }
    return 0;
}
