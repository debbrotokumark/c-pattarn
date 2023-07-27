#include<stdio.h>
int a(int n,int l)
{
    int i,j=0;
    for(i=1; i<=n; i++)
        j+=i;
    //printf("%d",j);
    for(i=1; i<=l; i++)
        j+=i;
    // printf("%d",j);
    return j+1;
}


int main()
{
    int i,j,n,k=0,l;
    scanf("%d",&n);
    l=n;

for(i=1;i<=n;i++){
    l--;
    for(j=1; j<i; j++)
        printf("  ");
    for(j=i; j<=n; j++) {
        k++;
        
        if(k>=10)
        printf("%d",k);
        else printf("%d ",k);
    }

  printf(" ");

    int x=a(n,l);
    
    for(j=i;j<=n;j++)
    printf("%2d ",x++);


   printf("\n");


}

    return 0;
}
