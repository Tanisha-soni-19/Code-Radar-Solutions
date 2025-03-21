#include <stdio.h>
#include <math.h>
int is_prime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
void print_primes_in_range(int a, int b) {
    int found_prime = 0;
    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            printf("%d ", i); 
            found_prime = 1;
        }
    }
    if (!found_prime) {
        printf("No prime numbers\n");
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    print_primes_in_range(a, b);

    return 0;
}