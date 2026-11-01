#include<stdio.h>
int main()
{
    long long X,Y;
    scanf("%ld%ld",&X,&Y);
    if(Y%X==0)
    {
        printf("%ld",X+Y);
    }else{
    printf("%ld",Y-X);
    }
}