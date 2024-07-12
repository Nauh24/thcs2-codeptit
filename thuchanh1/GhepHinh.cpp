#include <stdio.h>
#include <math.h>
long long isPerfectSquare(long long n) {
    long long sqrtN = sqrt(n);
    if (sqrtN * sqrtN == n) {
        return sqrtN;
    }
    return 0;
}

void swap(long long *a, long long *b) {
    long long temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    long long w1, h1, w2, h2, w3, h3;
    scanf("%lld %lld", &w1, &h1);
    scanf("%lld %lld", &w2, &h2);
    scanf("%lld %lld", &w3, &h3);

    long long area = (long long)w1 * h1 + (long long)w2 * h2 + (long long)w3 * h3;
    long long side = isPerfectSquare(area);
    
    if (side == 0) {
        printf("NO");
        return 0;
    }
    if (w1 > h1) swap(&w1, &h1);
    if (w2 > h2) swap(&w2, &h2);
    if (w3 > h3) swap(&w3, &h3);

    if (h1 == h2 && h2 == h3 && h3 == side) {
        printf("YES");
    } else {
        if (h2 == side) {
            swap(&h2, &h1);
            swap(&w2, &w1);
        }
        if (h3 == side) {
            swap(&h3, &h1);
            swap(&w3, &w1);
        }
        if (h1 == side) {
            w1 = side - w1;
            if ((w2 == w1 && w3 == w1) || (w2 == w1 && h3 == w1) || (h2 == w1 && w3 == w1) || (h2 == w1 && h3 == w1)) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else {
            printf("NO");
        }
    }

    return 0;
}

