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
    float total = 0.0, average;

    scanf("%d", &N);

    struct student students[N];

    // Input student data and compute total marks
    for (int i = 0; i < N; i++) {
       
        scanf("%d", &students[i].roll_no);

        
        scanf(" %s", students[i].name);  // assumes name has no spaces

        
        scanf("%f", &students[i].marks);

        total += students[i].marks;
    }

    // Calculate average
    average = total / N;

    // Display results
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
