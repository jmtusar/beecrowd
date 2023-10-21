#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x) == 1)
    {
        for(int i=0;i<x;i=i+2){
            for(int j=0;j<(x-i)/2;j++){
                printf(" ");
            }
            for(int k=i;k>=0;k--){
                printf("*");
            }
            printf("\n");
        }
        for (int i = 0; i < x/2; i++){
            printf(" ");
        }
        printf("*\n");

        for (int i = 1; i < x/2; i++){
            printf(" ");
        }
        printf("***\n\n");
    }
    return 0;
}
