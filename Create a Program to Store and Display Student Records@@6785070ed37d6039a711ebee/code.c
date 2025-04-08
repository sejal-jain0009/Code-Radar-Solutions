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
 
    scanf("%d", &N);

    // Create an array of structures
    struct student students[N];

    // Input student data
    for (i = 0; i < N; i++) {
       
   
        scanf("%d", &students[i].roll_no);

     
        scanf(" %[^\n]", students[i].name); // read string with spaces

 
        scanf("%f", &students[i].marks);
    }

    // Display student data
    
    for (i = 0; i < N; i++) {
        printf("Roll Number: %d Name: %s Marks: %.2f\n\n", students[i].roll_no);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
