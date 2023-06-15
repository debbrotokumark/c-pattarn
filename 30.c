#include<stdio.h>

int main()
{
   int a,b,c;
scanf("%d",&a);
  for(b=1;b<=a;b++)
  {
for(c=a*2;c>b*2;c--)
printf(" ");
for(c=-1*b;c<=b;c++){
    if(c==0 || c==1)
continue ;


printf("%d ",abs(c));

}

printf("\n");
}


    return 0;
}
