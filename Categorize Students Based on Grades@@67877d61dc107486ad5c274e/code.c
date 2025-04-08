// Your code here...
// Your code here...
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
    char grade;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].rollNumber, s[i].name, &s[i].marks);

        if (s[i].marks >= 85) {
            s[i].grade = 'A';
        } else if (s[i].marks >= 70) {
            s[i].grade = 'B';
        } else {
            s[i].grade = 'C';
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", s[i].rollNumber, s[i].name, s[i].grade);
    }

    return 0;
}