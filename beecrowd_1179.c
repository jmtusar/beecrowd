#include<stdio.h>

int main(){
    int par[5],impar[5],n,x=0,y=0;
    for(int i=0;i<15;i++){
        scanf("%d",&n);
        if(n%2==0){
            par[x]=n;
            x++;
            if(x==5){
                for(x=0;x<5;x++){
                    printf("par[%d] = %d\n",x,par[x]);
                }
                x=0;
            }

        }else{
            impar[y]=n;
            y++;
            if(y==5){
                for(y=0;y<5;y++){
                    printf("impar[%d] = %d\n",y,impar[y]);
                }
                y=0;
            }
        }
    }

        for(int i=0;i<y;i++){
        printf("impar[%d] = %d\n",i,impar[i]);
        }

        for(int i=0;i<x;i++){
        printf("par[%d] = %d\n",i,par[i]);
        }
    return 0;
}
