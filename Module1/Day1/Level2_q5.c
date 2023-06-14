#include<stdio.h>
int chr_type(char ch){
    int type;

    if (ch >= 'A' && ch <= 'Z') {
        type = 1;
    } else if (ch >= 'a' && ch <= 'z') {
        type = 2;
    } else if (ch >= '0' && ch <= '9') {
        type = 3;
    } else if (ch >= ' ' && ch <= '~') {
        type = 4;
    } else {
        type = 5;
    }

    return type;
}
int main(){
    char chr;
    printf("Enter character:");
    scanf(" %c",&chr);
    int result=chr_type(chr);
    printf("%d\n",result);
    return 0;
}