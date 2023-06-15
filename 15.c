#include<stdio.h>

int main()
{
    int a,b,c,d;
  scanf("%d",&a);

   for(b=1;b<=2*a-1;b++)
    {
    if(b<=a){
    for(c=a;c>b;c--)
    printf(" ");
    for(d=1;d<=b;d++){
    if(d==1 || d==b)
    printf("* ");
    else printf("  ");
    }
    }
    else{
    for(c=a;c<b;c++)
    printf(" ");
    for(d=b+1;d<=2*a;d++){
    if(d==b+1 || d==2*a)
    printf("* ");
    else printf("  ");

    }

    }

    printf("\n");
    }
    return 0;
}
