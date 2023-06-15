#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);

   for(b=1;b<=2*a-1;b++)
    {
    if(b<=a)
    {
    for(c=b;c<a;c++)
    printf(" ");
    for(d=1;d<=b;d++)
    printf("* ");
    }
    else{
    for(c=a;c<b;c++)
    printf(" ");
    for(d=b+1;d<=2*a;d++)
    printf("* ");
    }

    printf("\n");
    }
    return 0;
}
