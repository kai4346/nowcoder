#include<stdio.h>
int main()
{
    int x,y;
    int count=0;
    scanf("%d %d",&x,&y);
    for(int i=x;i<=y;i++)
    {
    int temp=i;
    int sum=0;
        while(temp>0)
        {
    int p=temp%10;
    sum+=p;
    temp/=10;
        
        } 
        if(sum%5==0)
        {
        count++;
        }
        
    }
      printf("%d\n",count);


}