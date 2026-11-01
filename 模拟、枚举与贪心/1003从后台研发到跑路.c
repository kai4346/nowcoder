#include <stdio.h>
char s[6000];
int main(){
    int n=0,c,i=0,str=0;
    while((c=getchar())!=EOF) s[n++]=c;
    while(i<n){
        if(str){
            putchar(s[i]);
            if(s[i]=='"'&&(i==0||s[i-1]!='\\')) str=0;
            i++;
        }else if(s[i]=='"'&&(i==0||s[i-1]!='\\')){
            str=1; putchar(s[i++]);
        }else if(s[i]=='/'&&i+1<n&&s[i+1]=='*'){
            int j=i+2;
            while(j+1<n&&!(s[j]=='*'&&s[j+1]=='/')) j++;
            if(j+1<n) i=j+2;
            else putchar(s[i++]);
        }else putchar(s[i++]);
    }
}