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

    // Ask the user how many students they want to enter
    printf("Enter the number of students: ");
    scanf("%d", &N);

    // Create an array of structures
    struct student students[N];

    // Input student data
    for (i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // read string with spaces

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student data
    
    for (i = 0; i < N; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
