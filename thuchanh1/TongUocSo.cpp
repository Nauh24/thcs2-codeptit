#include <stdio.h>
#include <math.h>
#define MAX 2000000
#define ll long long

ll primes[MAX + 1];
void initialize_primes() {
    for (ll i = 2; i <= MAX; i++) {
        primes[i] = i;
    }
    for (ll i = 2; i <= sqrt(MAX); i++) {
        if (primes[i] == i) { 
            for (ll j = i * i; j <= MAX; j += i) {
                if (primes[j] == j) {
                    primes[j] = i; 
                }
            }
        }
    }
}

ll compute_prime_factors_sum(ll n) {
    ll sum = 0;
    while (n > 1) {
        sum += primes[n];
        n /= primes[n];
    }
    return sum;
}

int main() {
    initialize_primes(); 
    ll t;
    scanf("%lld", &t);
    ll total_sum = 0;
    while (t--) {
        ll n;
        scanf("%lld", &n);
        total_sum += compute_prime_factors_sum(n); 

     
	}
	printf("%lld\n", total_sum);
}


