#include <stdio.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int N;
    scanf("%d", &N);  // Read number of students

    struct student students[N];

    // Read student details
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_no, students[i].name, &students[i].marks);
    }

    // Print student details
    for (int i = 0; i < N; i++) {
        printf("Roll Number : %d, Name: %s, Marks: %.2f\n",
               students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}

