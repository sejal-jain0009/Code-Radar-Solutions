// Your code here...
#include <stdio.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int N, i;
    
    scanf("%d", &N);

    struct student students[N];
    struct student top_student;
    
    // Input data for N students
    for (i = 0; i < N; i++) {
     
        scanf("%d", &students[i].roll_no);
      
        scanf(" %s", students[i].name);  // No spaces in name
      
        scanf("%f", &students[i].marks);
    }

    // Assume the first student has the highest marks initially
    top_student = students[0];

    // Find the student with the highest marks
    for (i = 1; i < N; i++) {
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }

    // Display the top student details
    printf("\n--- Student with Highest Marks ---\n");
    printf(" Top Scorer: Roll Number : %d,", top_student.roll_no);
    printf("Name: %s,", top_student.name);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
