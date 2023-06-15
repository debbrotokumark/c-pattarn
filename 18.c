#include<stdio.h>

int main()
{
    int a,b,c,d,e;
  scanf("%d",&a);


   for(b=1;b<=a*2;b++)
    {

    if(b<=a){
for(c=1;c<=2*a;c++){
if(c<=a-b+1 || c>=a+b)
 printf("*");
else printf(" ");}}
  else{
    for(c=1;c<=2*a;c++){
    if(c<=b-a || c>3*a-b)
    printf("*");
    else printf(" ");


    }


    }
    printf("\n");
    }
    return 0;
}
