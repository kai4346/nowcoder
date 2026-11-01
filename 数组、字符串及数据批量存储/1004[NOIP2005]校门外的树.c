#include<stdio.h>
int main()
{
    int L,M,res=0;
    int length[10000];
    scanf("%d %d",&L,&M);
    int MM=M;
     for(int i=0;i<=L;i++)
    {
    length[i]=1;
     }
    while(MM--)
    {
    int l,r;
    scanf("%d %d",&l,&r);    
    for(int j=l;j<=r;j++)
    {
    length[j]=0;
}
    
    } 
    for(int k=0;k<=L;k++)
    {
    if(length[k]==1)
    {
    res++;
}
        
}  printf("%d",res);
  
    return 0; 

}