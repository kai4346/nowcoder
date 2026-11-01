#include<stdio.h>
int main()
{
    int n,size[1005];
    scanf("%d",&n);
     for(int i=0;i<n;i++)
    {
        scanf("%d",&size[i]);   }
    if(n==1)
    {
        if(size[0]==0)
        {
        printf("UP\n");
        } else if(size[0]==15)
        {
        printf("DOWN\n");
        }else{
    printf("-1\n");
        }
}  else{
  
if (size[n-1] > size[n-2]) {
    if (size[n-1] == 15) {
        printf("DOWN\n");
    } else {
        printf("UP\n");
    }
} else {
    if (size[n-1] == 1||size[n-1]==0) {
        printf("UP\n");
    } else {
        printf("DOWN\n");
    }
}}}