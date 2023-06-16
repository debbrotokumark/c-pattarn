#include<stdio.h>



int main(){

int x,a,b;
scanf("%d",&x);
for(a=1;a<=x;a++)
{
    for(b=1;b<=a;b++)
    printf("*");
   for(b=a;b< x;b++)
    printf("  ");
  for(b=1;b<=a;b++)
    printf("*");

printf("\n");

}


for(a=1;a<x;a++)
{
   for(b=a;b<x;b++)
    printf("*");
for(b=1;b<=a;b++)
        printf("  ");
 for(b=a;b<x;b++)
    printf("*");


printf("\n");

}



}

