#include<stdio.h>

int main()
{
    int a,b,c,d,e;
  scanf("%d",&a);


   for(b=1;b<=a*2;b++)
    {


for(c=1;c<=2*a;c++){

    if(c+b==2*a+1 || c==b|| c==1 || c==2*a)
    printf("*");
    else printf(" ");

    }
    printf("\n");
    }
    return 0;
}
