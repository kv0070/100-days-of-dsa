#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[50];

    // Step 1: Read number of elements
    scanf("%d", &n);

    // Step 2: Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Read position (1-based) and element
    scanf("%d", &pos);
    scanf("%d", &x);

    // Step 4: Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 5: Insert the element
    arr[pos - 1] = x;

    // Step 6: Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
