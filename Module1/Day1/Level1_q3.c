#include<stdio.h>
void student_details(int rollno,char *name,float marks[]){
    int total;
    for(int i=0;i<3;i++){
        total+=marks[i];
    }
    float percentage=((float)total/300)*100;
    printf("Roll No    : %d\n",rollno);
    printf("Name       : %s\n",name);
    printf("Total      : %d\n",total);
    printf("Percentage : %f\n",percentage);
}
int main(){
    int rno;
    char name[50];
    float marks[3];
    printf("Enter Roll No:");
    scanf("%d",&rno);
    printf("Enter Fullname of student:");
    scanf("%s",name);
    printf("Enter Physics marks:");
    scanf("%f",&marks[0]);
    printf("Enter Maths marks:");
    scanf("%f",&marks[1]);
    printf("Enter Chemistry marks:");
    scanf("%f",&marks[2]);
    student_details(rno,name,marks);
    return 0;   
}