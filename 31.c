#include<stdio.h>

int main()
{
int i,j,k,n;
scanf("%d",&n);

for(i=1;i<2*n;i++)
{
k=n;
for(j=1;j<2*n;j++)
{
if(i<=n){
printf("%d ",k);
if(i>j)
k--;
if (i+j>=2*n)
k++;

}
else{
printf("%d ",k);
if(i+j<2*n)
k--;
if(j>=i)
k++;

}
}
printf("\n");

}
    return 0;
}
