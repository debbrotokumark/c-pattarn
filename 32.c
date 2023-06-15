#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);
   for(b=1;b<=a;b++)
    {

    for(c=1;c<=b;c++)
    printf("%c ",64+a-b+c);


    printf("\n");
    }
    return 0;
}
