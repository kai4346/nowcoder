#include <stdio.h>

int is_prime(long long n) {
    if (n < 2) 
        return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

int main(void) {
    long long t;
    scanf("%lld", &t);

    long long pal = t;
    long long temp = t / 10;
    while (temp > 0) {
        pal = pal * 10 + temp % 10;
        temp /= 10;
    }

    if (is_prime(pal)) {
        printf("prime");
    } else {
        printf("noprime");
    }

    return 0;
}