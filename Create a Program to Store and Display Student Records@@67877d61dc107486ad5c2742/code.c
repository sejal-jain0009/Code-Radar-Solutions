// Your code here...
#include <stdio.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int N;

    // Ask user how many students
  
    scanf("%d", &N);

    // Create array of student structures
    struct student students[N];

    // Input student data
    for (int i = 0; i < N; i++) {
       
     
        scanf("%d", &students[i].roll_no);

        scanf(" %s", students[i].name);  // Reads name without spaces

        scanf("%f", &students[i].marks);
    }

    // Display student data
   
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}
