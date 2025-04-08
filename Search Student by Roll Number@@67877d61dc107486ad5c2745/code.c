// Your code here...
#include <stdio.h>
#include <stdbool.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int N, search_roll;
    bool found = false;

    scanf("%d", &N);

    struct student students[N];

    // Input student data
    for (int i = 0; i < N; i++) {
        
        scanf("%d", &students[i].roll_no);

        
        scanf(" %s", students[i].name); // Name without spaces

        
        scanf("%f", &students[i].marks);
    }

    // Ask for roll number to search
    
    scanf("%d", &search_roll);

    // Search for the student
    for (int i = 0; i < N; i++) {
        if (students[i].roll_no == search_roll) {
            
            printf("Roll Number: %d,", students[i].roll_no);
            printf(" Name: %s,", students[i].name);
            printf(" Marks: %.2f\n", students[i].marks);
            found = true;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }

    return 0;
}
