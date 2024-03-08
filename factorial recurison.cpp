#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else
        return n * factorial(n - 1); 
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Factorial of %d is %llu\n", num1, factorial(num1));
    printf("Factorial of %d is %llu\n", num2, factorial(num2));
    return 0;
}

