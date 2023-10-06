#include <stdio.h>

int main() {

    int tmp,a[3];

    for(int i=0; i<3; i++){
        scanf("%i",&a[i]);
    }
    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){
            if(a[j]<a[i]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    if(a[2]>=a[0]+a[1]){
        printf("Invalido\n");
    }
    else{
        if (a[0] == a[1] && a[1] == a[2])
            printf("Valido-Equilatero\n");

        else if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2])
            printf("Valido-Escaleno\n");

        else
            printf("Valido-Isoceles\n");

        if (a[2]*a[2] == (a[0]*a[0]+a[1]*a[1]))
            printf("Retangulo: S\n");

        else
            printf("Retangulo: N\n");
    }

    return 0;
}
