#include <stdio.h>

int main() {

    int x,y,sum=0,tmp;

    for(int i=0;i<10000;i++){
        scanf("%d %d",&x,&y);
        if(x<1||y<1){
            break;
        }
        else{
            if(x>y){
                tmp=x;
                x=y;
                y=tmp;
            }
            for(int j=x;j<=y;j++){
                printf("%d ",j);
                sum+=j;
            }
            printf("Sum=%d\n",sum);
        }
        sum=0;
    }

    return 0;
}
