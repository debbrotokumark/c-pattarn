#include<stdio.h>

int main()
{
   int a,b,c;
scanf("%d",&a);

  for(b=1;b<=a;b++)
  {
for(c=1;c<=a;c++)
if(b==1 || b==a||c==a || c==1)
printf("*");
else
printf(" ");

printf("\n");
}


    return 0;
}
