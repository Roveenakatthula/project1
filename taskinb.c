#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: elements of array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort logic
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                // Swap a[j] and a[j+1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output: sorted array
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
