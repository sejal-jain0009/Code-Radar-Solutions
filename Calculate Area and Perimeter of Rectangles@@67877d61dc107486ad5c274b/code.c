// Your code here...
#include <stdio.h>

// Define the structure
struct Rectangle {
    float length;
    float breadth;
};

int main() {
    int N, i;   
    scanf("%d", &N);

    struct Rectangle rects[N];

    // Input data for each rectangle
    for (i = 0; i < N; i++) {
       
        scanf("%f", &rects[i].length);
        
        scanf("%f", &rects[i].breadth);
    }

    // Display area and perimeter for each rectangle
   
    for (i = 0; i < N; i++) {
        float area = rects[i].length * rects[i].breadth;
        float perimeter = 2 * (rects[i].length + rects[i].breadth);

        printf("Rectangle %d: ", i + 1);
        printf("Area = %.2f,", area);
        printf(" Perimeter = %.2f\n", perimeter);
    }

    return 0;
}
