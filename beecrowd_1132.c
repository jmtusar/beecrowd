#include <stdio.h>

int main() {

    int x,y,sum=0,tmp;
    scanf("%d %d",&x,&y);

    if(x>y){
        tmp=x;
        x=y;
        y=tmp;
    }

    for(int i=x;i<y;i++){
        if(i%13!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
