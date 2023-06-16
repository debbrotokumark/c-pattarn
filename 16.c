#include<stdio.h>

int fun(int a,int b){
    int x=1,y=1,z=1;
    for(int n=1;n<=a;n++)
    x=x*n;
      for(int n=1;n<=b;n++)
    y=y*n;
      for(int n=1;n<=a-b;n++)
    z=z*n;

    int c=(x/(y*z));
    return c;

}

int main(){
int a ,b,c;
scanf("%d",&c);
for(a=0;a<=c-1;a++)
{
    for(b=c-1;b>a;b--)
    printf(" ");

for(b=0;b<=a;b++)
    {
        printf("%d ",fun(a,b));
    }
    printf("\n");

}


}

