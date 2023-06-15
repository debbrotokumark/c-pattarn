#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);
   for(b=1;b<=a;b++)
    {

    for(c=a;c>=b;c--)
    printf("%c ",65+c-b);


    printf("\n");
    }
    return 0;
}
