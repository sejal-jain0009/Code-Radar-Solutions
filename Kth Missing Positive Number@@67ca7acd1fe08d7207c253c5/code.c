// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0;
    int current = 1;
    int i = 0;

    while (1) {
        if (i < n && arr[i] == current) {
            i++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }
}