#include <stdio.h>

// Function for call by value
void swapValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapValue - a: %d, b: %d\n", a, b);
}

// Function for call by reference
void swapRef(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // Swaps actual variables using pointers
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n--- Before Swap ---\n");
    printf("x: %d, y: %d\n", x, y);

    // Call-by-value: values won't actually swap in main
    swapValue(x, y);
    printf("After swapValue (call-by-value): x: %d, y: %d\n", x, y);

    // Call-by-reference: values will swap in main
    swapRef(&x, &y);
    printf("After swapRef (call-by-reference): x: %d, y: %d\n", x, y);

    return 0;
}



