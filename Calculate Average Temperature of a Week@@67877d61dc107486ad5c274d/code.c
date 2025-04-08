// Your code here...
// Your code here...
#include <stdio.h>

struct Day {
    char name[20];
    float temperature;
};

int main() {
    struct Day week[7];
    float sum = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%s %f", week[i].name, &week[i].temperature);
        sum += week[i].temperature;
    }

    float average = sum / 7;

    printf("Average Temperature: %.2f\n", average);

    return 0;
}