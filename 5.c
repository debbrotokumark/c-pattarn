#include<stdio.h>

int main()
{
   int a,b;
scanf("%d",&a);

  for(b=1;b<=a*2-1;b++)
  {
if(b<=a){
for(int c=1;c<=b;c++)
printf("*");
}

else {

for(int c=2*a-b;c>=1;c--)
printf("*");


}



printf("\n");
}


    return 0;
}
