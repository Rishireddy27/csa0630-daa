#include <stdio.h>
int isPrime(int n, int i);

int main() {
    int num, prime;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num > 1) {
        prime = isPrime(num, 2); 

        if (prime == 1) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    } else {
        
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

int isPrime(int n, int i) {
    if (n % i == 0) {
        
        return 0;
    } else if (i == n / 2) {
        
        return 1;
    } else {
        return isPrime(n, i + 1);
    }
}
