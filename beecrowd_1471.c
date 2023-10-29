#include <stdio.h>

int main() {
    int x,y,z,tmp;
    int arr[20000];
    while(scanf("%d %d",&x,&y)==2){
        for(int i=0;i<x;i++){
            arr[i]=i+1;
        }
        for(int i=0;i<y;i++){
            scanf("%d",&z);
            arr[z-1]=0;
        }
        tmp=0;
        for(int i=0;i<x;i++){
            if(arr[i]!=0){
                ++tmp;
                printf("%d ",arr[i]);
            }
        }
        if(tmp==0){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
