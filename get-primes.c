#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check numbers of the form 6i + 1 or 6i + 5 up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true; 
}

int main() {
    int numPrimes;;

    printf("Enter the number of primes you want: \n");

    scanf("%d", &numPrimes);

    printf("Your first %d number of primes is: \n", numPrimes);

    for (int i = 0, count = 0; count < numPrimes; i++) {
        if (is_prime(i)) {
            printf("%d", i);
            count++;
            if (count < numPrimes) {
                printf(", ");
            }
            else {
                printf("\n");
            }
        }
    }
}