#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool sorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

