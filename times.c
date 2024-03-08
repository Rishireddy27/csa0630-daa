#include <stdio.h>

int findMajority(int arr[], int n) {
    int majority = arr[0];
    int count = 1;
    int i;

    for ( i = 1; i < n; i++) {
        if (count == 0) {
            majority = arr[i];
            count = 1;
        } else if (arr[i] == majority) {
            count++;
        } else {
            count--;
        }
    }

    
    count = 0;
    for ( i = 0; i < n; i++) {
        if (arr[i] == majority) {
            count++;
        }
    }

    if (count > n / 2) {
        return majority;
    } else {
        return -1; 
    }
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = findMajority(arr, n);

    if (result != -1) {
        printf("The majority element is %d\n", result);
    } else {
        printf("No majority element found\n");
    }

    return 0;
}

