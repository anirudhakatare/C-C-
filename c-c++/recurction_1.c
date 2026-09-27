#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fib(int n) {
    if (n == 0)
        return 0;   // base case 1
    else if (n == 1)
        return 1;   // base case 2
    else
        return fib(n - 1) + fib(n - 2);  // recursive relation
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %d\n", n, fib(n));
    return 0;
}
