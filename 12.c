#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);

   for(b=1;b<=2*a;b++)
    {
    if(b<=a){
    for(c=1;c<b;c++)
    printf(" ");
    for(d=a;d>=b;d--)
    printf("* ");

    }
    else{
    for(c=2*a;c>b;c--)
    printf(" ");
    for(d=a;d<b;d++)
    printf("* ");

    }



    printf("\n");
    }
    return 0;
}
