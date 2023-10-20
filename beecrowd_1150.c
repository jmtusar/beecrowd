#include <stdio.h>

int main() {

    int x,z,sum=0,cunt=1;
    scanf("%d %d",&x,&z);

    while(z<=x){
        scanf("%d",&z);
    }
    for(int i=x;i<z;i++){
        sum=sum+i;
        if(sum<z){
            cunt=cunt+1;
        }
    }

    printf("%d\n",cunt);

    //return 0;
}
