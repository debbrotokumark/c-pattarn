#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);
   for(b=1;b<=a;b++)
    {

    for(c=a;c>b;c--)
    printf(" ");
    for(d=1;d<=2*b-1;d++){

    if(d==1 || d==2*b-1 || b==a)
    printf("*");
    else printf(" ");
    }
    printf("\n");
    }
    return 0;
}
