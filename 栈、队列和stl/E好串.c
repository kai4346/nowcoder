#include<stdio.h>
#include <string.h>
int main()
{
    char a[100000];
    scanf("%s",a);
    int len=strlen(a);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]=='a')
        {
        count++;
        }else if(a[i]=='b'){
            if(count == 0)
            {
            printf("Bad\n");
            return 0;
            }
            count--;
        }
        
         
}
    if(count == 0)
    {
    printf("Good");
}else{
    printf("Bad");
    }
     
 
 
}