#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < 10; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

    printf("Arranged array (from largest to smallest):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
