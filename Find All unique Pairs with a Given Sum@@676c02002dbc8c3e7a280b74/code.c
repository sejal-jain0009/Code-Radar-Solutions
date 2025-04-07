// Your code here...
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    // 2D array to track printed pairs (assuming values are within 0-100)
    int printed[201][201] = {0}; // use 201 to allow negative numbers if needed (adjust as required)

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int a = arr[i] < arr[j] ? arr[i] : arr[j];
                int b = arr[i] > arr[j] ? arr[i] : arr[j];
                if (!printed[a + 100][b + 100]) { // offset by 100 to handle negative indices
                    printf("%d %d\n", a, b);
                    printed[a + 100][b + 100] = 1;
                }
            }
        }
    }

    return 0;
}