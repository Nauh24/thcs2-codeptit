#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm s?p x?p m?ng theo th? t? gi?m d?n
void sortDescending(int* arr, int size) {
    int i = 0;
    while (i < size - 1) {
        int j = 0;
        while (j < size - i - 1) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
            j++;
        }
        i++;
    }
}

int findKthLargestUnique(int *arr, int size, int k) {
    sortDescending(arr, size);

    int count = 1;
    int current = arr[0];
    int uniqueIndex = 1;
    int kth_largest = current;

    while (uniqueIndex < size && count < k) {
        if (arr[uniqueIndex] != current) {
            current = arr[uniqueIndex];
            count++;
            kth_largest = current;
        }
        uniqueIndex++;
    }

    return (count >= k) ? kth_largest : -1; // Tr? v? -1 n?u không tìm th?y ph?n t? l?n th? k
}

void processTestCase() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);

    int matrix[m * n];
    int index = 0;

    int row = 0;
    while (row < m) {
        int col = 0;
        while (col < n) {
            scanf("%d", &matrix[index]);
            index++;
            col++;
        }
        row++;
    }

    int kth_largest = findKthLargestUnique(matrix, m * n, k);
    printf("%d\n", kth_largest);
}

int main() {
    int T;
    scanf("%d", &T);

    int test_count = 0;
    while (test_count < T) {
        processTestCase();
        test_count++;
    }

    return 0;
}

