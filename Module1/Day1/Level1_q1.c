#include<stdio.h>
int bignum_ifel(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}
int bignum_terop(int num1,int num2){
    int c=((num1>num2)?num1:num2);
    return c;
}
int main(){
    int input1,input2,result1,result2;
    printf("Enter two numbers:");
    scanf("%d %d",&input1,&input2);
    result1=bignum_ifel(input1,input2);
    printf("Biggest number using if-else condition is:%d\n",result1);
    result2=bignum_terop(input1,input2);
    printf("Biggest number using ternary operator is:%d\n",result2);
    return 0;
}