#include<stdio.h>
int main()
{
    char c;
    int n;
    scanf("%c",&c);
    n=c-64;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i-1;j++)
        {
        printf(" ");
            
        }
        for(int j=0;j<=i;j++)
        {
        printf("%c",'A'+j);
        }
       for(int j=i-1;j>=0;j--)
       {
        printf("%c",'A'+j);
       }
        printf("\n");
    }
   
}