#include<stdio.h>
void display_grades(int marks){
    if(marks>=0&&marks<50){
        printf("Grade F\n");
    }
    else if(marks>=50&&marks<60){
        printf("Grade D\n");
    }
    else if(marks>=60&&marks<75){
        printf("Grade C\n");
    }
    else if(marks>=75&&marks<90){
        printf("Grade B\n");
    }
    else if(marks>=90&&marks<=100){
        printf("Grade A\n");
    }
    else{
        printf("Invalid input");
    }
}
int main(){
    int marks;
    printf("Enter your subject marks:");
    scanf("%d",&marks);
    display_grades(marks);
    return 0;
}