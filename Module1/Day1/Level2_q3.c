#include<stdio.h>
int find_vowl(char chrt){
    if(chrt=='A'||chrt=='E'||chrt=='I'||chrt=='O'||chrt=='U'||chrt=='a'||chrt=='e'||chrt=='i'||chrt=='o'||chrt=='u'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char chrt;
    printf("Enter character :");
    scanf(" %c",&chrt);
    int result=find_vowl(chrt);
    if(result==1){
        printf("Vowel\n");
    }
    else{
        printf("Not vowel\n");
    }
    return 0;
}