#include <stdio.h>

int main() {
    int x;
    while(1){
        scanf("%d",&x);
        if(x!=0){
            for(int i=1;i<x;i++){
                printf("%d ",i);
            }
            printf("%d\n",x);
        }
        else{
            break;
        }
    }
}

