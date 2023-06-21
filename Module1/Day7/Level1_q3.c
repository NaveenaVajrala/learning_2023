#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    char* token;
    char* rest = strdup(input);
    
    for (int i = 0; i < size; i++) {
        // Parse rollno
        token = strtok_r(rest, " ", &rest);
        students[i].rollno = atoi(token);
        
        // Parse name
        token = strtok_r(rest, " ", &rest);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        
        // Parse marks
        token = strtok_r(rest, " ", &rest);
        students[i].marks = atof(token);
    }
    
}

void displayStudents(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // Clear the newline character
    
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    
    printf("Enter student data:\n");
    for (int i = 0; i < size; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        parseString(input, &students[i], 1);
    }
    
    printf("\nStudent Details:\n");
    displayStudents(students, size);
    
    free(students);
    
    return 0;
}
