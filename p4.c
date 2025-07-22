#include <stdio.h>

void countFreq(int arr[], int n) {
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("[%d %d],", arr[i], count);
    }
}

int main() {
    int arr[] = {10, 20, 10, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    countFreq(arr, n);

    return 0;
}

