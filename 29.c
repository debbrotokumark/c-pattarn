
#include<stdio.h>

int main()
{
    int a,b,c,d,e;
  scanf("%d",&a);

e=2*a-1;
   for(b=1;b<=2*a-1;b++)
    {
    if(b<=a){
    for(c=1;c<=2*a;c++){
    if(c<=b || c >e)
    printf("*");

    else printf(" ");

    }
    e--;
    }
    else{
    for(c=1;c<=2*a;c++)
    if(c>b || c<=2*a-b)
    printf("*");

    else printf(" ");


    }
    printf("\n");
    }
    return 0;
}
