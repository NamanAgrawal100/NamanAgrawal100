#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    int age;
};

int main() {
    struct student students[5];
    
    printf("Enter the details of 5 students (rollno, name, and age):\n");
    
    for (int i = 0; i < 5; i++) {
        students[i].rollno = i + 1; // Assigning roll number starting from 1
        scanf("%s%d", students[i].name, &students[i].age);
    }

    // Print the details of the student with roll number 2 (index 1 in the array).
    printf("\nDetails of the student with roll no. 2:\n");
    printf("Roll No: %d\n", students[1].rollno);
    printf("Name: %s\n", students[1].name);
    printf("Age: %d\n", students[1].age);

    return 0;
}
