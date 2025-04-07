
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[10001] = {0};  // assuming values are <= 10000
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int maxFreq = 0, result = 10001;
    for(int i = 0; i < 10001; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        } else if(freq[i] == maxFreq && i < result) {
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}