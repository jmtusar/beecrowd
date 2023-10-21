#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

bool is_super_prime(int num) {
    if (is_prime(num)) {
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (!is_prime(digit)) {
                return false;
            }
            temp /= 10;
        }
        return true;
    }
    return false;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (is_super_prime(n)) {
            printf("Super\n");
        } else if (is_prime(n)) {
            printf("Primo\n");
        } else {
            printf("Nada\n");
        }
    }
    return 0;
}
