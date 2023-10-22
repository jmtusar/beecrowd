#include <stdio.h>

int main() {
    int N, M;
    while (1) {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0) {
            break;
        }
        int change = M - N;
        int bills[] = {2, 5, 10, 20, 50, 100};
        int possible = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 6; j++) {
                if (bills[i] + bills[j] == change) {
                    possible = 1;
                    break;
                }
            }
            if (possible) {
                break;
            }
        }
        if (possible) {
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    }
    return 0;
}
