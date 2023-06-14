#include<stdio.h>
int grt_num(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}
int main(){
    int num1,num2,num3;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    int result=grt_num(num1,num2,num3);
    printf("The greatest number is : %d\n",result);
    return 0;
}