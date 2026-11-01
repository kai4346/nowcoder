#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    for(int i=1;i<=n+1;i++)
    {
        for(int j=1;j<=2*(n+1-i);j++)
        {
        printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
        printf("*");
        }
           printf("\n");}
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=2*(n+1-i);j++)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
            printf("*");
            }
            printf("\n");
        }
    }

}
