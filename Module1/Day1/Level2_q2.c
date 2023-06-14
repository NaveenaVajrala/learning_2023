#include<stdio.h>
int grades(int marks){
    switch(marks){
        case 90 ... 100:
            return 'A';
            break;
        case 75 ... 89:
            return 'B';
            break;
        case 60 ... 74:
            return 'C';
            break;
        case 50 ... 59:
            return 'D';
            break;
        case 36 ... 49:
            return 'E';
            break;
        case 0 ... 35:
            return 'F';
            break;
        default:
            return '\0';
            break;
    }
}

int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    int result=grades(marks);
    if(result==65){
        printf("Grade A\n");
    }
    else if(result==66){
        printf("Grade B\n");
    }
    else if(result==67){
        printf("Grade C\n");
    }
    else if(result==68){
        printf("Grade D\n");
    }
    else if(result==69){
        printf("Grade E\n");
    }
    else if(result==70){
        printf("Grade F\n");
    }
    else{
        printf("Invalid option\n");
    }
    return 0;
}