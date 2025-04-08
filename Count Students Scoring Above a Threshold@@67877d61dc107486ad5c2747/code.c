// Your code here...
#include <stdio.h>

// Define the structure
struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int N, count = 0;
    float threshold;

   
    scanf("%d", &N);

    struct student students[N];

    // Input student data
    for (int i = 0; i < N; i++) {
        
        scanf("%d", &students[i].roll_no);
   
        scanf(" %s", students[i].name); // assumes no spaces in name

       
        scanf("%f", &students[i].marks);
    }

    // Input threshold
  
    scanf("%f", &threshold);

    // Count students above threshold
    for (int i = 0; i < N; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }

    // Output result
    printf("Count of students scoring above %.2f: %d\n", threshold, count);

    return 0;
}
