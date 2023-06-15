#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);
   for(b=1;b<=a;b++)
    {

    for(c=1;c<=b;c++){
    if((b+c)%2==0)
    printf("1 ");
    else printf("0 ");
   }
    printf("\n");
    }
    return 0;
}
