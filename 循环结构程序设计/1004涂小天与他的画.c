#include<stdio.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
    for(int i=0;i<(n/2)+1;i++)
    {
    for(int j=0;j<n/2-i;j++)
    {
        printf(" ");
    }
    for(int k=0;k<2*i+1;k++)
    {
        printf("*");    
    }
    printf("\n");
}
    for(int i=1;i<=(n-1)/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
        printf(" ");
        
        }
       for(int k=0; k<n-2*i;k++)
{
          printf("*");
}
        printf("\n");
    }
    }
    

}