#include<stdio.h>
void enc_str(char *s){
    for(int i=0;s[i]!='\0';i++){
        s[i]=s[i]+2;
    }
}
void dec_str(char *s){
    for(int i=0;s[i]!='\0';i++){
        s[i]=s[i]-2;
    }
}
int main(){
    char s[100];
    printf("Enter string:");
    scanf("%s",s);
    enc_str(s);
    printf("Encoded string : %s\n",s);
    dec_str(s);
    printf("Decoded string : %s\n",s);
    return 0;
}