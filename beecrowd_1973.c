#include <stdio.h>

int main() {
    int n, i;
    long long unsigned sum = 0, tmp = 0;
    scanf("%d", &n);
    int arr[n], a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        a[i] = 0;
    }
    i = 0;
    while (i >= 0 && i < n) {
        if (arr[i] == 0){
            i--;
        }else{
            arr[i]--;
            a[i] = 1;
            if (arr[i] % 2 == 1){
                i--;
            }else{
                i++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
        if (a[i])
            tmp++;
    }
    printf("%llu %llu\n", tmp, sum);
    return 0;
}
