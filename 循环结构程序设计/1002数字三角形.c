#include<stdio.h>
int main()
{
    int n,i,j,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    {
        count++;
     printf("%4d",count);
}
        printf("\n");
}
}