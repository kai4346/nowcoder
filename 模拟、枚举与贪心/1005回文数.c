#include<stdio.h>
int main()
{
    int a[10];
    int sum=0;
    int odd_count=0;
    int mid=-1;
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]%2==1)
        {
            odd_count++;
            mid=i;
        }
    }
    if(odd_count>1)
    {
        printf("-1\n");
        return 0;
    }
    
    if(sum==1)
    {
        for(int i=0;i<10;i++)
        {
            if(a[i]==1)
            {
                printf("%d\n",i);
                return 0;
            }
        }
      
    }
    int first =-1;
    for(int i=1;i<10;i++)
    {
        if(a[i]>=2)
        {
           first=i;
            break;
        }
    }
   if(first==-1)
   {
       printf("-1\n");
      return 0;
   }
    char left[110];
    int len=0;
     
    left[len++]='0'+first;
    a[first]-=2;
    
    for(int i=0;i<10;i++)
    {
        int pairs =a[i]/2;
        for(int k=0;k<pairs;k++)
        {
            left[len++]='0'+i;
        }
    }
    for(int i=0;i<len;i++)
    {
        putchar(left[i]);
    }
    if(sum%2==1)
    {
        putchar('0'+mid);
    }
    for(int i=len-1;i>=0;i--)
    {
        putchar(left[i]);
    }
    putchar('\n');
    
    return 0;
    
    
    
    
    



}