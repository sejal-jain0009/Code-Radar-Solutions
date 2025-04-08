#include <stdio.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int N;

   
    scanf("%d", &N);

    struct student students[N], lowest;

    // Input data
    for (int i = 0; i < N; i++) {
       
        scanf("%d", &students[i].roll_no);

    
        scanf(" %s", students[i].name);  // assumes name has no spaces

       
        scanf("%f", &students[i].marks);
    }

    // Assume first student has the lowest marks initially
    lowest = students[0];

    // Find the student with the lowest marks
    for (int i = 1; i < N; i++) {
        if (students[i].marks < lowest.marks) {
            lowest = students[i];
        }
    }

    // Display the student with lowest marks
    printf(" Student with Lowest Marks: ");
    printf("Roll Number: %d,", lowest.roll_no);
    printf("Name: %s,", lowest.name);
    printf("Marks: %.2f", lowest.marks);

    return 0;
}
