// Your code here...
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    int allPassed = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].rollNumber, s[i].name, &s[i].marks);
        if (s[i].marks <= 50) {
            allPassed = 0;
        }
    }

    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}