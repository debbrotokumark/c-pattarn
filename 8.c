#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);

  for(b=1;b<=a;b++)
    {
    for(c=1;c<b;c++)
    printf(" ");
    for(d=2*a-b;d>=b;d--)
    printf("*");


    printf("\n");
    }
    return 0;
}
