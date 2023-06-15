
#include<stdio.h>

int main()
{
    int a,b,c,d,e;
  scanf("%d",&a);


   for(b=1;b<=2*a-1;b++)
    {
    e=-1*b;
    if(b<=a){
    for(c=a;c>b;c--)
    printf(" ");
   for(d=e;d<=b;d++){
if(d==0 || d==1)
continue;
    printf("%d",abs(d)); }
    }
 else{
    for(c=a;c<b;c++)
    printf(" ");
    for(d=b-2*a;d<=2*a-b;d++){
    if(d==0 || d==1)
continue;
printf("%d",abs(d));

    }
    }
    printf("\n");
    }
    return 0;
}
