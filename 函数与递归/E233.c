#include<stdio.h>
#include<string.h>
void mul(char*a,char*b,char*c)
{
    int res[150]={0};
    int lena=strlen(a);
    int lenb=strlen(b);
    for(int i=0;i<lena;i++)
    {
        int x=a[lena-1-i]-'0';
        for(int j=0;j<lenb;j++)
        {
        int y=b[lenb-1-j]-'0';
        res[i+j]+=x*y;
        }

    }
    
    for(int k=0;k<lena+lenb;k++)
    {
        res[k+1]+=res[k]/10;
        res[k]%=10;

    }
    int p= lena+lenb;
    while(p>0&&res[p]==0) p--;
    int idx=0;
    for(;p>=0;p--)
    {
        c[idx++]=res[p]+'0';
}    
     c[idx]='\0';
}    


int main()
{
    int T;
    char s1[55],s2[55],s3[150];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s %s",s1,s2);
        mul(s1,s2,s3);
        printf("%s\n",s3);
    }
    return 0;



}