#include<stdio.h>

int main()
{
   int a,b,c,d=1;
scanf("%d",&a);

  for(b=1;b<=a;b++)
  {
for(c=1;c<=b;c++)
{
if(d%2==0)
printf("%c ",64+d);
else printf("%c ",96+d);

d++;
}
printf("\n");
}


    return 0;
}
