#include<stdio.h>

int main(){
    int n,x,y,z,d,tmp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        d=999;
        for(int j=0;j<x;j++){
            scanf("%d",&z);
            if (d > abs(y-z)) {
                d = abs(y-z);
                tmp = j;
            }
        }
        printf("%d\n",tmp+1);
    }
    return 0;
}/*
            if(z-1==y||z+1==y){
                printf("%d\n",j+1);
                break;
            }
            if(z-2==y||z+2==y){
                printf("%d\n",j+1);
                break;
            }
            if(z-3==y||z+3==y){
                printf("%d\n",j+1);
                break;
            }
            if(z-4==y||z+4==y){
                printf("%d\n",j+1);
                break;
            }
            if(z-5==y||z+5==y){
                printf("%d\n",j+1);
                break;
            }*/
/*
3
7 35
8 26 30 43 36 17 7
4 16
12 16 3 16
10 48
3 7 27 9 50 49 16 47 63 1
*/
