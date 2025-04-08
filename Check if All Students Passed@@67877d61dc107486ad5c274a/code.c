// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 100

// Define the structure
struct Student {
    int rollNo;
    char name[MAX_NAME_LEN];
    float marks;
};

int main() {
    int N, i;
    int allPassed = 1; // Assume all passed initially
    float passingMarks = 50.0;

   
    scanf("%d", &N);

    struct Student students[N]; // Array of students

    // Input data for each student
    for (i = 0; i < N; i++) {
        
        scanf("%d", &students[i].rollNo);

      
        scanf(" %[^\n]", students[i].name); // Read string with spaces

        
        scanf("%f", &students[i].marks);

        if (students[i].marks < passingMarks) {
            allPassed = 0;
        }
    }

    // Check and display result
    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}
