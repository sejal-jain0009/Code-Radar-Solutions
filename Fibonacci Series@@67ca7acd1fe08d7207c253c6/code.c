// Your code here...
// Your code here...
void fibonacciSeries(int n) {
    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        printf("%d", a);
        if (i != n - 1)
            printf(" ");
        
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}