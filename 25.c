#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);

  for(b=1;b<=a;b++)
    {

    for(c=a;c>b;c--)
    printf(" ");

    for(d=1;d<=a;d++){
    if(b==1 || b==a || d==1|| d==a){
    printf("*");
    }
    else printf(" ");
    }


    printf("\n");
    }
    return 0;
}
