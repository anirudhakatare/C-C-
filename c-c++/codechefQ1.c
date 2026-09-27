#include <stdio.h>

int main() {
    // Declare an int variable for a portion of the balance (in millions)
    int balance = 500; // 500 million
    
    // Declare a long variable for the total bank balance
    long int bank = 10000000;
    
    // Print the value of the millions portion
    printf("Balance in millions: %d million\n", balance);
    
    // Print the total bank balance
    printf("Total Bank Balance: %ld millions\n", bank);
    
    return 0;
}
