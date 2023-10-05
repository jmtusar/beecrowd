#include <stdio.h>

int main() {

    int A , B , C , D, difference;

    scanf("%d %d %d %d", &A , &B ,&C, &D);

    difference=((A * B) - (C * D));

    printf("DIFERENCA = %d\n", difference);
}
/*
DIFERENCA = -26
Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).
*/
