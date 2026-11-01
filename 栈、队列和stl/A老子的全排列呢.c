#include<stdio.h>
int arr[8];
int arr1[9];
void dfs(int depth)
{
    if(depth==8)
    {
        for(int i=0;i<8;i++)
        {
            if(i>0)
            {
            printf(" ");}
            printf("%d",arr[i]);
        }
            
            printf("\n");
            return;
            
      
    }
    for(int i=1;i<=8;i++)
    {
    if(!arr1[i])
    {
        arr1[i]=1;
        arr[depth]=i;
        dfs(depth+1);
        arr1[i]=0;
     }

}

}
int main(void)
{
    dfs(0);
    return 0;

}