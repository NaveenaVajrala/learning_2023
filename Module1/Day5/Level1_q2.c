#include<stdio.h>
#include <stdlib.h>
int str_to_int(char *s){
    int res=0;
    for(int i=0;s[i]!='\0';i++){
        res=(res*10)+(s[i]-48);
    }
    return res;
}
int main(){
    char s[100];
    printf("Enter input:");
    scanf("%s",s);
    int result=str_to_int(s);
    printf("Integer from string is :%d\n",result);
    return 0;
}