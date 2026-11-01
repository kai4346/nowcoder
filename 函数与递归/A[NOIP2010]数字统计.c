#include<stdio.h>
int main()
{
    int L,R;
    int count=0;
    scanf("%d %d",&L,&R);
    for(int i=L;i<=R;i++)
    {
        int j=i;
    while(j>0)
    {
        if(j%10==2)
        {
        count++;
}
        j=j/10;

}  }  printf("%d",count);


}