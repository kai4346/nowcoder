#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d %d %d",&n,&k,&m);
    int inc[1000];
    for(int i=0;i<n;i++)
    {
    inc[i]=1;
}
    int remain=n;
    int index=k;
    int count=0;
    while(remain>1)
    {
        if(inc[index]==1)
        {
        count++;
        
        if(count==m)
        {
        inc[index]=0;
        remain--;
        count=0;
}    }
        index=(index+1)%n;
}
    for(int i=0;i<n;i++)
    {
        if(inc[i]==1)
        {
        printf("%d",i);
        break;
        }
}    
    

}