#include<stdio.h>
long long ai[100001],bi[100001];
long long sum=0;
long long ci[100001];
void sort(int l,int r)
{
    if(l>r)
        return ;
    long long middle =ci[(l+r)/2];
    int i=l,j=r;
    while(i<=j)
    {
    while(ci[i]>middle) i++;
    while(ci[j]<middle) j--;
    if(i<=j)
    {
        long long t=ci[i];
        ci[i] =ci[j];
        ci[j] =t;
        i++;
        j--;
}



}    
    sort(l,j);
    sort(i,r);


}
int main()
{
    int n,K;
    scanf("%d %d\n",&n,&K);
    int temp = n;
    
        for(int i=0;i<n;i++)
        {
        scanf("%lld",&ai[i]);
        }
        for(int j=0;j<n;j++)
        {
        scanf("%lld",&bi[j]);
        sum+=ai[j];
        ci[j]=bi[j]-ai[j];
        }
        sort(0,n-1);
        for(int i=0;i<n-K;i++)
        {
            sum+=ci[i];
}
        printf("%lld\n",sum);
        return 0;
    
    
    
    
    


}