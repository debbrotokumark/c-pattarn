#include<stdio.h>

int main()
{
   int a,b,c,d;
scanf("%d",&a);

  for(b=1;b<=a;b++)
  {
for(c=1;c<=b-1;c++)
printf(" ");

for(d=b;d<=a;d++)
printf("*");



printf("\n");
}


    return 0;
}
