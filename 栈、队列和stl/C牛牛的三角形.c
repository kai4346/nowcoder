#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int size[105];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&size[i]);
        }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                if(size[i]+size[j]>size[k]&&size[i]+size[k]>size[j]&&size[k]+size[j]>size[i])
                {
                    printf("%d %d %d\n",size[i],size[j],size[k]);
                    return 0;
                }
                
                }
                }

            }
        }
     printf("No solution\n");
    return 0;
      
    }
                 

        
    