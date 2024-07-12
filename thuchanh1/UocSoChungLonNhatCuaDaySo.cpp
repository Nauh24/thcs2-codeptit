#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void findB(int A[], int N) {
    int B[N + 1];
    B[0] = A[0];

    for (int i = 1; i < N; i++) {
    
        B[i] = (A[i - 1] * A[i]) / gcd(A[i - 1], A[i]);
    }

    B[N] = A[N - 1];

    for (int i = 0; i <= N; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        findB(A, N);
    }

    return 0;
}

