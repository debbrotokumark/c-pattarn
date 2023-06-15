#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);

   for(b=1;b<=a;b++)
    {

    for(c=1;c<=b;c++)
    printf("%d",c);
    for(d=a;d>b;d--)
    printf("  ");
    for(c=b;c>=1;c--)
    printf("%d",c);


    printf("\n");
    }
    return 0;
}
