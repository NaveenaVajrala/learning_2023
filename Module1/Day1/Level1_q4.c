#include<stdio.h>
int simple_calc(int oprnd1,int oprnd2,char opr){
    switch(opr){
        case '+':
            return oprnd1+oprnd2;
            break;
        case '-':
            return oprnd1-oprnd2;
            break;
        case '*':
            return oprnd1*oprnd2;
            break;
        case '/':
            if(oprnd2!=0){
                return oprnd1/oprnd2;
            }
            else{
                printf("Zero dividon error\n");
            }
            break;
        default:
            printf("Invalid operation\n");
    }
}
int main(){
    int num1,num2;
    char op;             
    printf("Enter Number1:");
    scanf("%d",&num1);
    printf("Enter the operator:");
    scanf(" %c",&op);
    printf("Enter Number2:");
    scanf("%d",&num2);
    int result=simple_calc(num1,num2,op);
    printf("Result is: %d\n",result);
    return 0;
}