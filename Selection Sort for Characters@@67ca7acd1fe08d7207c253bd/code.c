// Your code here...
// Your code here...
// Function to perform selection sort on characters
void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap characters
        char temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print characters separated by space
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
        if (i != n - 1)
            printf(" ");
    }
    printf("\n");
}