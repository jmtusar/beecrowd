#include <stdio.h>

int main() {

    int a[100],max,x;
    for(int i=0;i<100;i++){
        scanf("%d",&a[i]);
    }

    max=a[0];
    x=1;
    for(int i=0;i<100;i++){
        if(a[i]>max){
            max=a[i];
            x=i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",x);

    return 0;
}
