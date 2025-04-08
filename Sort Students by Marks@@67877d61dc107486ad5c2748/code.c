// Your code here...
#include <stdio.h>
#include <string.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

// Swap function
void swap(struct student *a, struct student *b) {
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int N;

    scanf("%d", &N);

    struct student students[N];

    // Input student data
    for (int i = 0; i < N; i++) {
       
        scanf("%d", &students[i].roll_no);

        
        scanf(" %s", students[i].name);  // assumes name has no spaces

        
        scanf("%f", &students[i].marks);
    }

    // Sort students in decreasing order of marks using Bubble Sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }

    // Display sorted list
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}
