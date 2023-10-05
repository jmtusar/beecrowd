#include<stdio.h>

int main(){
    int x,y,z,s;
    int a[3];

    scanf("%d %d %d", &x, &y, &z);
    a[0] = x;
    a[1] = y;
    a[2] = z;

    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(a[i] < a[j]){
                            s = a[j];
                            a[j] = a[i];
                            a[i] = s;
                    }
            }
    }

    printf("%d\n%d\n%d\n", a[0], a[1], a[2]);
    printf("\n%d\n%d\n%d\n", x,y,z);
    return 0;
}
